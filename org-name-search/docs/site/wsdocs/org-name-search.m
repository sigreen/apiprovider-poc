#import "org-name-search.h"
#ifndef DEF_ORG_NAME_SEARCHNS0Organizations_M
#define DEF_ORG_NAME_SEARCHNS0Organizations_M

/**
 * (no documentation provided)
 */
@implementation ORG_NAME_SEARCHNS0Organizations

/**
 * (no documentation provided)
 */
- (NSArray *) organizationList
{
  return _organizationList;
}

/**
 * (no documentation provided)
 */
- (void) setOrganizationList: (NSArray *) newOrganizationList
{
  [newOrganizationList retain];
  [_organizationList release];
  _organizationList = newOrganizationList;
}

- (void) dealloc
{
  [self setOrganizationList: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ORG_NAME_SEARCHNS0Organizations *_oRG_NAME_SEARCHNS0Organizations;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oRG_NAME_SEARCHNS0Organizations = (ORG_NAME_SEARCHNS0Organizations *) [ORG_NAME_SEARCHNS0Organizations readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oRG_NAME_SEARCHNS0Organizations;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ORG_NAME_SEARCHNS0Organizations */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ORG_NAME_SEARCHNS0Organizations (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ORG_NAME_SEARCHNS0Organizations (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ORG_NAME_SEARCHNS0Organizations (JAXB)

/**
 * Read an instance of ORG_NAME_SEARCHNS0Organizations from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ORG_NAME_SEARCHNS0Organizations defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ORG_NAME_SEARCHNS0Organizations *_oRG_NAME_SEARCHNS0Organizations = [[ORG_NAME_SEARCHNS0Organizations alloc] init];
  NS_DURING
  {
    [_oRG_NAME_SEARCHNS0Organizations initWithReader: reader];
  }
  NS_HANDLER
  {
    _oRG_NAME_SEARCHNS0Organizations = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oRG_NAME_SEARCHNS0Organizations autorelease];
  return _oRG_NAME_SEARCHNS0Organizations;
}

/**
 * Initialize this instance of ORG_NAME_SEARCHNS0Organizations according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ORG_NAME_SEARCHNS0Organizations to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ORG_NAME_SEARCHNS0Organizations from an XML reader. The element to be read is
 * "organizations".
 *
 * @param reader The XML reader.
 * @return The ORG_NAME_SEARCHNS0Organizations.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ORG_NAME_SEARCHNS0Organizations *_organizations = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element organizations."];
    }
  }

  if (xmlStrcmp(BAD_CAST "organizations", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}organizations.");
#endif
    _organizations = (ORG_NAME_SEARCHNS0Organizations *)[ORG_NAME_SEARCHNS0Organizations readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}organizations.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ORG_NAME_SEARCHNS0Organizations. Expected element organizations. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ORG_NAME_SEARCHNS0Organizations. Expected element organizations. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _organizations;
}

/**
 * Writes this ORG_NAME_SEARCHNS0Organizations to XML under element name "organizations".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _organizations The Organizations to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ORG_NAME_SEARCHNS0Organizations to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organizations", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}organizations. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}organizations for root element {}organizations...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}organizations for root element {}organizations...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}organizations. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "organizations", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}organizations of type {}organization.");
#endif

    __child = [ORG_NAME_SEARCHNS0Organization readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}organizations of type {}organization.");
#endif

    if ([self organizationList]) {
      [self setOrganizationList: [[self organizationList] arrayByAddingObject: __child]];
    }
    else {
      [self setOrganizationList: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self organizationList]) {
    __enumerator = [[self organizationList] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organizations", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}organizations."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}organizations...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}organizations...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}organizations."];
      }
    } //end item iterator.
  }
}
@end /* implementation ORG_NAME_SEARCHNS0Organizations (JAXB) */

#endif /* DEF_ORG_NAME_SEARCHNS0Organizations_M */
#ifndef DEF_ORG_NAME_SEARCHNS0PageResponse_M
#define DEF_ORG_NAME_SEARCHNS0PageResponse_M

/**
 * (no documentation provided)
 */
@implementation ORG_NAME_SEARCHNS0PageResponse

/**
 * (no documentation provided)
 */
- (NSObject *) content
{
  return _content;
}

/**
 * (no documentation provided)
 */
- (void) setContent: (NSObject *) newContent
{
  [newContent retain];
  [_content release];
  _content = newContent;
}

/**
 * (no documentation provided)
 */
- (long long *) totalElements
{
  return _totalElements;
}

/**
 * (no documentation provided)
 */
- (void) setTotalElements: (long long *) newTotalElements
{
  if (_totalElements != NULL) {
    free(_totalElements);
  }
  _totalElements = newTotalElements;
}

/**
 * (no documentation provided)
 */
- (int *) totalPages
{
  return _totalPages;
}

/**
 * (no documentation provided)
 */
- (void) setTotalPages: (int *) newTotalPages
{
  if (_totalPages != NULL) {
    free(_totalPages);
  }
  _totalPages = newTotalPages;
}

- (void) dealloc
{
  [self setContent: nil];
  [self setTotalElements: NULL];
  [self setTotalPages: NULL];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ORG_NAME_SEARCHNS0PageResponse *_oRG_NAME_SEARCHNS0PageResponse;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oRG_NAME_SEARCHNS0PageResponse = (ORG_NAME_SEARCHNS0PageResponse *) [ORG_NAME_SEARCHNS0PageResponse readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oRG_NAME_SEARCHNS0PageResponse;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ORG_NAME_SEARCHNS0PageResponse */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ORG_NAME_SEARCHNS0PageResponse (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ORG_NAME_SEARCHNS0PageResponse (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ORG_NAME_SEARCHNS0PageResponse (JAXB)

/**
 * Read an instance of ORG_NAME_SEARCHNS0PageResponse from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ORG_NAME_SEARCHNS0PageResponse defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ORG_NAME_SEARCHNS0PageResponse *_oRG_NAME_SEARCHNS0PageResponse = [[ORG_NAME_SEARCHNS0PageResponse alloc] init];
  NS_DURING
  {
    [_oRG_NAME_SEARCHNS0PageResponse initWithReader: reader];
  }
  NS_HANDLER
  {
    _oRG_NAME_SEARCHNS0PageResponse = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oRG_NAME_SEARCHNS0PageResponse autorelease];
  return _oRG_NAME_SEARCHNS0PageResponse;
}

/**
 * Initialize this instance of ORG_NAME_SEARCHNS0PageResponse according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ORG_NAME_SEARCHNS0PageResponse to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ORG_NAME_SEARCHNS0PageResponse from an XML reader. The element to be read is
 * "pageResponse".
 *
 * @param reader The XML reader.
 * @return The ORG_NAME_SEARCHNS0PageResponse.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ORG_NAME_SEARCHNS0PageResponse *_pageResponse = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element pageResponse."];
    }
  }

  if (xmlStrcmp(BAD_CAST "pageResponse", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}pageResponse.");
#endif
    _pageResponse = (ORG_NAME_SEARCHNS0PageResponse *)[ORG_NAME_SEARCHNS0PageResponse readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}pageResponse.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ORG_NAME_SEARCHNS0PageResponse. Expected element pageResponse. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ORG_NAME_SEARCHNS0PageResponse. Expected element pageResponse. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _pageResponse;
}

/**
 * Writes this ORG_NAME_SEARCHNS0PageResponse to XML under element name "pageResponse".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _pageResponse The PageResponse to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ORG_NAME_SEARCHNS0PageResponse to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pageResponse", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}pageResponse. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}pageResponse for root element {}pageResponse...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}pageResponse for root element {}pageResponse...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}pageResponse. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "content", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}content of type {http://www.w3.org/2001/XMLSchema}anyType.");
#endif
    __child = [NSObject readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}content of type {http://www.w3.org/2001/XMLSchema}anyType.");
#endif

    [self setContent: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "totalElements", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTotalElements: ((long long*) _child_accessor)];
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "totalPages", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTotalPages: ((int*) _child_accessor)];
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self content]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "content", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}content."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}content...");
#endif
    [[self content] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}content...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}content."];
    }
  }
  if ([self totalElements] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "totalElements", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}totalElements."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}totalElements...");
#endif
    status = xmlTextWriterWriteLongType(writer, [self totalElements]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}totalElements...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}totalElements."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}totalElements."];
    }
  }
  if ([self totalPages] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "totalPages", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}totalPages."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}totalPages...");
#endif
    status = xmlTextWriterWriteIntType(writer, [self totalPages]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}totalPages...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}totalPages."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}totalPages."];
    }
  }
}
@end /* implementation ORG_NAME_SEARCHNS0PageResponse (JAXB) */

#endif /* DEF_ORG_NAME_SEARCHNS0PageResponse_M */
#ifndef DEF_ORG_NAME_SEARCHNS0Organization_M
#define DEF_ORG_NAME_SEARCHNS0Organization_M

/**
 * (no documentation provided)
 */
@implementation ORG_NAME_SEARCHNS0Organization

/**
 * (no documentation provided)
 */
- (long long *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (long long *) newIdentifier
{
  if (_identifier != NULL) {
    free(_identifier);
  }
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (int) orgId
{
  return _orgId;
}

/**
 * (no documentation provided)
 */
- (void) setOrgId: (int) newOrgId
{
  _orgId = newOrgId;
}

/**
 * (no documentation provided)
 */
- (NSString *) orgName
{
  return _orgName;
}

/**
 * (no documentation provided)
 */
- (void) setOrgName: (NSString *) newOrgName
{
  [newOrgName retain];
  [_orgName release];
  _orgName = newOrgName;
}

- (void) dealloc
{
  [self setIdentifier: NULL];
  [self setOrgName: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ORG_NAME_SEARCHNS0Organization *_oRG_NAME_SEARCHNS0Organization;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oRG_NAME_SEARCHNS0Organization = (ORG_NAME_SEARCHNS0Organization *) [ORG_NAME_SEARCHNS0Organization readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oRG_NAME_SEARCHNS0Organization;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ORG_NAME_SEARCHNS0Organization */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ORG_NAME_SEARCHNS0Organization (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ORG_NAME_SEARCHNS0Organization (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ORG_NAME_SEARCHNS0Organization (JAXB)

/**
 * Read an instance of ORG_NAME_SEARCHNS0Organization from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ORG_NAME_SEARCHNS0Organization defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ORG_NAME_SEARCHNS0Organization *_oRG_NAME_SEARCHNS0Organization = [[ORG_NAME_SEARCHNS0Organization alloc] init];
  NS_DURING
  {
    [_oRG_NAME_SEARCHNS0Organization initWithReader: reader];
  }
  NS_HANDLER
  {
    _oRG_NAME_SEARCHNS0Organization = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oRG_NAME_SEARCHNS0Organization autorelease];
  return _oRG_NAME_SEARCHNS0Organization;
}

/**
 * Initialize this instance of ORG_NAME_SEARCHNS0Organization according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ORG_NAME_SEARCHNS0Organization to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ORG_NAME_SEARCHNS0Organization from an XML reader. The element to be read is
 * "organization".
 *
 * @param reader The XML reader.
 * @return The ORG_NAME_SEARCHNS0Organization.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ORG_NAME_SEARCHNS0Organization *_organization = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element organization."];
    }
  }

  if (xmlStrcmp(BAD_CAST "organization", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}organization.");
#endif
    _organization = (ORG_NAME_SEARCHNS0Organization *)[ORG_NAME_SEARCHNS0Organization readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}organization.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ORG_NAME_SEARCHNS0Organization. Expected element organization. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ORG_NAME_SEARCHNS0Organization. Expected element organization. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _organization;
}

/**
 * Writes this ORG_NAME_SEARCHNS0Organization to XML under element name "organization".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _organization The Organization to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ORG_NAME_SEARCHNS0Organization to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organization", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}organization. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}organization for root element {}organization...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}organization for root element {}organization...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}organization. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setIdentifier: ((long long*) _child_accessor)];
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "orgId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setOrgId: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "orgName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}orgName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}orgName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOrgName: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    status = xmlTextWriterWriteLongType(writer, [self identifier]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}id."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "orgId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}orgId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}orgId...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_orgId);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}orgId...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}orgId."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}orgId."];
    }
  }
  if ([self orgName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "orgName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}orgName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}orgName...");
#endif
    [[self orgName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}orgName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}orgName."];
    }
  }
}
@end /* implementation ORG_NAME_SEARCHNS0Organization (JAXB) */

#endif /* DEF_ORG_NAME_SEARCHNS0Organization_M */
#ifndef DEF_ORG_NAME_SEARCHNS0OrganizationPages_M
#define DEF_ORG_NAME_SEARCHNS0OrganizationPages_M

/**
 * (no documentation provided)
 */
@implementation ORG_NAME_SEARCHNS0OrganizationPages

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ORG_NAME_SEARCHNS0OrganizationPages *_oRG_NAME_SEARCHNS0OrganizationPages;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oRG_NAME_SEARCHNS0OrganizationPages = (ORG_NAME_SEARCHNS0OrganizationPages *) [ORG_NAME_SEARCHNS0OrganizationPages readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oRG_NAME_SEARCHNS0OrganizationPages;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ORG_NAME_SEARCHNS0OrganizationPages */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ORG_NAME_SEARCHNS0OrganizationPages (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ORG_NAME_SEARCHNS0OrganizationPages (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ORG_NAME_SEARCHNS0OrganizationPages (JAXB)

/**
 * Read an instance of ORG_NAME_SEARCHNS0OrganizationPages from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ORG_NAME_SEARCHNS0OrganizationPages defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ORG_NAME_SEARCHNS0OrganizationPages *_oRG_NAME_SEARCHNS0OrganizationPages = [[ORG_NAME_SEARCHNS0OrganizationPages alloc] init];
  NS_DURING
  {
    [_oRG_NAME_SEARCHNS0OrganizationPages initWithReader: reader];
  }
  NS_HANDLER
  {
    _oRG_NAME_SEARCHNS0OrganizationPages = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oRG_NAME_SEARCHNS0OrganizationPages autorelease];
  return _oRG_NAME_SEARCHNS0OrganizationPages;
}

/**
 * Initialize this instance of ORG_NAME_SEARCHNS0OrganizationPages according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ORG_NAME_SEARCHNS0OrganizationPages to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ORG_NAME_SEARCHNS0OrganizationPages from an XML reader. The element to be read is
 * "organizationPages".
 *
 * @param reader The XML reader.
 * @return The ORG_NAME_SEARCHNS0OrganizationPages.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ORG_NAME_SEARCHNS0OrganizationPages *_organizationPages = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element organizationPages."];
    }
  }

  if (xmlStrcmp(BAD_CAST "organizationPages", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}organizationPages.");
#endif
    _organizationPages = (ORG_NAME_SEARCHNS0OrganizationPages *)[ORG_NAME_SEARCHNS0OrganizationPages readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}organizationPages.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ORG_NAME_SEARCHNS0OrganizationPages. Expected element organizationPages. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ORG_NAME_SEARCHNS0OrganizationPages. Expected element organizationPages. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _organizationPages;
}

/**
 * Writes this ORG_NAME_SEARCHNS0OrganizationPages to XML under element name "organizationPages".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _organizationPages The OrganizationPages to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ORG_NAME_SEARCHNS0OrganizationPages to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organizationPages", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}organizationPages. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}organizationPages for root element {}organizationPages...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}organizationPages for root element {}organizationPages...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}organizationPages. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation ORG_NAME_SEARCHNS0OrganizationPages (JAXB) */

#endif /* DEF_ORG_NAME_SEARCHNS0OrganizationPages_M */
