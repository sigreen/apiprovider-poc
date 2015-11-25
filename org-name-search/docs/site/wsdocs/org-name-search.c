#include <enunciate-common.c>
#ifndef DEF_org_name_search_ns0_organization_H
#define DEF_org_name_search_ns0_organization_H

/**
 * (no documentation provided)
 */
struct org_name_search_ns0_organization {


  /**
   * (no documentation provided)
   */
  long long *id;

  /**
   * (no documentation provided)
   */
  int orgId;

  /**
   * (no documentation provided)
   */
  xmlChar *orgName;
};

/**
 * Reads a Organization element from XML. The element to be read is "organization", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Organization, or NULL in case of error.
 */
struct org_name_search_ns0_organization *xml_read_org_name_search_ns0_organization(xmlTextReaderPtr reader);

/**
 * Writes a Organization to XML under element name "organization".
 *
 * @param writer The XML writer.
 * @param _organization The Organization to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_org_name_search_ns0_organization(xmlTextWriterPtr writer, struct org_name_search_ns0_organization *_organization);

/**
 * Frees a Organization.
 *
 * @param _organization The Organization to free.
 */
void free_org_name_search_ns0_organization(struct org_name_search_ns0_organization *_organization);

/**
 * Reads a Organization element from XML. The element to be read is "organization", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Organization, or NULL in case of error.
 */
struct org_name_search_ns0_organization *xmlTextReaderReadNs0OrganizationElement(xmlTextReaderPtr reader);

/**
 * Writes a Organization to XML under element name "organization".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _organization The Organization to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrganizationElement(xmlTextWriterPtr writer, struct org_name_search_ns0_organization *_organization);

/**
 * Writes a Organization to XML under element name "organization".
 *
 * @param writer The XML writer.
 * @param _organization The Organization to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrganizationElementNS(xmlTextWriterPtr writer, struct org_name_search_ns0_organization *_organization, int writeNamespaces);

/**
 * Frees the children of a Organization.
 *
 * @param _organization The Organization whose children are to be free.
 */
static void freeNs0OrganizationElement(struct org_name_search_ns0_organization *_organization);

/**
 * Reads a Organization from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Organization, or NULL in case of error.
 */
static struct org_name_search_ns0_organization *xmlTextReaderReadNs0OrganizationType(xmlTextReaderPtr reader);

/**
 * Writes a Organization to XML.
 *
 * @param writer The XML writer.
 * @param _organization The Organization to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrganizationType(xmlTextWriterPtr writer, struct org_name_search_ns0_organization *_organization);

/**
 * Frees the elements of a Organization.
 *
 * @param _organization The Organization to free.
 */
static void freeNs0OrganizationType(struct org_name_search_ns0_organization *_organization);

#endif /* DEF_org_name_search_ns0_organization_H */
#ifndef DEF_org_name_search_ns0_organizationPages_H
#define DEF_org_name_search_ns0_organizationPages_H

/**
 * (no documentation provided)
 */
struct org_name_search_ns0_organizationPages {


  /**
   * (no documentation provided)
   */
  struct xmlBasicNode *content;

  /**
   * (no documentation provided)
   */
  long long *totalElements;

  /**
   * (no documentation provided)
   */
  int *totalPages;
};

/**
 * Reads a OrganizationPages element from XML. The element to be read is "organizationPages", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The OrganizationPages, or NULL in case of error.
 */
struct org_name_search_ns0_organizationPages *xml_read_org_name_search_ns0_organizationPages(xmlTextReaderPtr reader);

/**
 * Writes a OrganizationPages to XML under element name "organizationPages".
 *
 * @param writer The XML writer.
 * @param _organizationPages The OrganizationPages to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_org_name_search_ns0_organizationPages(xmlTextWriterPtr writer, struct org_name_search_ns0_organizationPages *_organizationPages);

/**
 * Frees a OrganizationPages.
 *
 * @param _organizationPages The OrganizationPages to free.
 */
void free_org_name_search_ns0_organizationPages(struct org_name_search_ns0_organizationPages *_organizationPages);

/**
 * Reads a OrganizationPages element from XML. The element to be read is "organizationPages", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The OrganizationPages, or NULL in case of error.
 */
struct org_name_search_ns0_organizationPages *xmlTextReaderReadNs0OrganizationPagesElement(xmlTextReaderPtr reader);

/**
 * Writes a OrganizationPages to XML under element name "organizationPages".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _organizationPages The OrganizationPages to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrganizationPagesElement(xmlTextWriterPtr writer, struct org_name_search_ns0_organizationPages *_organizationPages);

/**
 * Writes a OrganizationPages to XML under element name "organizationPages".
 *
 * @param writer The XML writer.
 * @param _organizationPages The OrganizationPages to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrganizationPagesElementNS(xmlTextWriterPtr writer, struct org_name_search_ns0_organizationPages *_organizationPages, int writeNamespaces);

/**
 * Frees the children of a OrganizationPages.
 *
 * @param _organizationPages The OrganizationPages whose children are to be free.
 */
static void freeNs0OrganizationPagesElement(struct org_name_search_ns0_organizationPages *_organizationPages);

/**
 * Reads a OrganizationPages from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The OrganizationPages, or NULL in case of error.
 */
static struct org_name_search_ns0_organizationPages *xmlTextReaderReadNs0OrganizationPagesType(xmlTextReaderPtr reader);

/**
 * Writes a OrganizationPages to XML.
 *
 * @param writer The XML writer.
 * @param _organizationPages The OrganizationPages to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrganizationPagesType(xmlTextWriterPtr writer, struct org_name_search_ns0_organizationPages *_organizationPages);

/**
 * Frees the elements of a OrganizationPages.
 *
 * @param _organizationPages The OrganizationPages to free.
 */
static void freeNs0OrganizationPagesType(struct org_name_search_ns0_organizationPages *_organizationPages);

#endif /* DEF_org_name_search_ns0_organizationPages_H */
#ifndef DEF_org_name_search_ns0_organizations_H
#define DEF_org_name_search_ns0_organizations_H

/**
 * (no documentation provided)
 */
struct org_name_search_ns0_organizations {


  /**
   * (no documentation provided)
   */
  struct org_name_search_ns0_organization *organizationList;

  /**
   * Size of the organizationList array.
   */
  int _sizeof_organizationList;
};

/**
 * Reads a Organizations element from XML. The element to be read is "organizations", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Organizations, or NULL in case of error.
 */
struct org_name_search_ns0_organizations *xml_read_org_name_search_ns0_organizations(xmlTextReaderPtr reader);

/**
 * Writes a Organizations to XML under element name "organizations".
 *
 * @param writer The XML writer.
 * @param _organizations The Organizations to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_org_name_search_ns0_organizations(xmlTextWriterPtr writer, struct org_name_search_ns0_organizations *_organizations);

/**
 * Frees a Organizations.
 *
 * @param _organizations The Organizations to free.
 */
void free_org_name_search_ns0_organizations(struct org_name_search_ns0_organizations *_organizations);

/**
 * Reads a Organizations element from XML. The element to be read is "organizations", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Organizations, or NULL in case of error.
 */
struct org_name_search_ns0_organizations *xmlTextReaderReadNs0OrganizationsElement(xmlTextReaderPtr reader);

/**
 * Writes a Organizations to XML under element name "organizations".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _organizations The Organizations to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrganizationsElement(xmlTextWriterPtr writer, struct org_name_search_ns0_organizations *_organizations);

/**
 * Writes a Organizations to XML under element name "organizations".
 *
 * @param writer The XML writer.
 * @param _organizations The Organizations to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrganizationsElementNS(xmlTextWriterPtr writer, struct org_name_search_ns0_organizations *_organizations, int writeNamespaces);

/**
 * Frees the children of a Organizations.
 *
 * @param _organizations The Organizations whose children are to be free.
 */
static void freeNs0OrganizationsElement(struct org_name_search_ns0_organizations *_organizations);

/**
 * Reads a Organizations from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Organizations, or NULL in case of error.
 */
static struct org_name_search_ns0_organizations *xmlTextReaderReadNs0OrganizationsType(xmlTextReaderPtr reader);

/**
 * Writes a Organizations to XML.
 *
 * @param writer The XML writer.
 * @param _organizations The Organizations to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrganizationsType(xmlTextWriterPtr writer, struct org_name_search_ns0_organizations *_organizations);

/**
 * Frees the elements of a Organizations.
 *
 * @param _organizations The Organizations to free.
 */
static void freeNs0OrganizationsType(struct org_name_search_ns0_organizations *_organizations);

#endif /* DEF_org_name_search_ns0_organizations_H */
#ifndef DEF_org_name_search_ns0_organization_M
#define DEF_org_name_search_ns0_organization_M

/**
 * Reads a Organization element from XML. The element to be read is "organization", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Organization, or NULL in case of error.
 */
struct org_name_search_ns0_organization *xml_read_org_name_search_ns0_organization(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0OrganizationElement(reader);
}

/**
 * Writes a Organization to XML under element name "organization".
 *
 * @param writer The XML writer.
 * @param _organization The Organization to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_org_name_search_ns0_organization(xmlTextWriterPtr writer, struct org_name_search_ns0_organization *_organization) {
  return xmlTextWriterWriteNs0OrganizationElementNS(writer, _organization, 1);
}

/**
 * Frees a Organization.
 *
 * @param _organization The Organization to free.
 */
void free_org_name_search_ns0_organization(struct org_name_search_ns0_organization *_organization) {
  freeNs0OrganizationType(_organization);
  free(_organization);
}

/**
 * Reads a Organization element from XML. The element to be read is "organization", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Organization, or NULL in case of error.
 */
struct org_name_search_ns0_organization *xmlTextReaderReadNs0OrganizationElement(xmlTextReaderPtr reader) {
  struct org_name_search_ns0_organization *_organization = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "organization", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}organization.\n");
#endif
    _organization = xmlTextReaderReadNs0OrganizationType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_organization == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}organization failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}organization failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _organization;
}

/**
 * Writes a Organization to XML under element name "organization".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _organization The Organization to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OrganizationElement(xmlTextWriterPtr writer, struct org_name_search_ns0_organization *_organization) {
  return xmlTextWriterWriteNs0OrganizationElementNS(writer, _organization, 0);
}

/**
 * Writes a Organization to XML under element name "organization".
 *
 * @param writer The XML writer.
 * @param _organization The Organization to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OrganizationElementNS(xmlTextWriterPtr writer, struct org_name_search_ns0_organization *_organization, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organization", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}organization. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}organization for root element {}organization...\n");
#endif
  status = xmlTextWriterWriteNs0OrganizationType(writer, _organization);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}organization. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}organization. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Organization.
 *
 * @param _organization The Organization whose children are to be free.
 */
static void freeNs0OrganizationElement(struct org_name_search_ns0_organization *_organization) {
  freeNs0OrganizationType(_organization);
}

/**
 * Reads a Organization from XML. The reader is assumed to be at the start element.
 *
 * @return the Organization, or NULL in case of error.
 */
static struct org_name_search_ns0_organization *xmlTextReaderReadNs0OrganizationType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct org_name_search_ns0_organization *_organization = calloc(1, sizeof(struct org_name_search_ns0_organization));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0OrganizationType(_organization);
        free(_organization);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrganizationType(_organization);
          free(_organization);
          return NULL;
        }

        _organization->id = ((long long*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "orgId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}orgId of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}orgId of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrganizationType(_organization);
          free(_organization);
          return NULL;
        }

        _organization->orgId = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "orgName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}orgName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}orgName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrganizationType(_organization);
          free(_organization);
          return NULL;
        }

        _organization->orgName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}organization.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}organization. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _organization;
}

/**
 * Writes a Organization to XML.
 *
 * @param writer The XML writer.
 * @param _organization The Organization to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0OrganizationType(xmlTextWriterPtr writer, struct org_name_search_ns0_organization *_organization) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_organization->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, (_organization->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "orgId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}orgId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}orgId...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_organization->orgId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}orgId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}orgId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_organization->orgName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "orgName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}orgName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}orgName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_organization->orgName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}orgName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}orgName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Organization.
 *
 * @param _organization The Organization to free.
 */
static void freeNs0OrganizationType(struct org_name_search_ns0_organization *_organization) {
  int i;
  if (_organization->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type org_name_search_ns0_organization...\n");
#endif
    freeXsLongType(_organization->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type org_name_search_ns0_organization...\n");
#endif
    free(_organization->id);
  }
  if (_organization->orgName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor orgName of type org_name_search_ns0_organization...\n");
#endif
    freeXsStringType(_organization->orgName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor orgName of type org_name_search_ns0_organization...\n");
#endif
    free(_organization->orgName);
  }
}
#endif /* DEF_org_name_search_ns0_organization_M */
#ifndef DEF_org_name_search_ns0_organizationPages_M
#define DEF_org_name_search_ns0_organizationPages_M

/**
 * Reads a OrganizationPages element from XML. The element to be read is "organizationPages", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The OrganizationPages, or NULL in case of error.
 */
struct org_name_search_ns0_organizationPages *xml_read_org_name_search_ns0_organizationPages(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0OrganizationPagesElement(reader);
}

/**
 * Writes a OrganizationPages to XML under element name "organizationPages".
 *
 * @param writer The XML writer.
 * @param _organizationPages The OrganizationPages to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_org_name_search_ns0_organizationPages(xmlTextWriterPtr writer, struct org_name_search_ns0_organizationPages *_organizationPages) {
  return xmlTextWriterWriteNs0OrganizationPagesElementNS(writer, _organizationPages, 1);
}

/**
 * Frees a OrganizationPages.
 *
 * @param _organizationPages The OrganizationPages to free.
 */
void free_org_name_search_ns0_organizationPages(struct org_name_search_ns0_organizationPages *_organizationPages) {
  freeNs0OrganizationPagesType(_organizationPages);
  free(_organizationPages);
}

/**
 * Reads a OrganizationPages element from XML. The element to be read is "organizationPages", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The OrganizationPages, or NULL in case of error.
 */
struct org_name_search_ns0_organizationPages *xmlTextReaderReadNs0OrganizationPagesElement(xmlTextReaderPtr reader) {
  struct org_name_search_ns0_organizationPages *_organizationPages = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "organizationPages", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}organizationPages.\n");
#endif
    _organizationPages = xmlTextReaderReadNs0OrganizationPagesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_organizationPages == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}organizationPages failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}organizationPages failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _organizationPages;
}

/**
 * Writes a OrganizationPages to XML under element name "organizationPages".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _organizationPages The OrganizationPages to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OrganizationPagesElement(xmlTextWriterPtr writer, struct org_name_search_ns0_organizationPages *_organizationPages) {
  return xmlTextWriterWriteNs0OrganizationPagesElementNS(writer, _organizationPages, 0);
}

/**
 * Writes a OrganizationPages to XML under element name "organizationPages".
 *
 * @param writer The XML writer.
 * @param _organizationPages The OrganizationPages to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OrganizationPagesElementNS(xmlTextWriterPtr writer, struct org_name_search_ns0_organizationPages *_organizationPages, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organizationPages", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}organizationPages. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}organizationPages for root element {}organizationPages...\n");
#endif
  status = xmlTextWriterWriteNs0OrganizationPagesType(writer, _organizationPages);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}organizationPages. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}organizationPages. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a OrganizationPages.
 *
 * @param _organizationPages The OrganizationPages whose children are to be free.
 */
static void freeNs0OrganizationPagesElement(struct org_name_search_ns0_organizationPages *_organizationPages) {
  freeNs0OrganizationPagesType(_organizationPages);
}

/**
 * Reads a OrganizationPages from XML. The reader is assumed to be at the start element.
 *
 * @return the OrganizationPages, or NULL in case of error.
 */
static struct org_name_search_ns0_organizationPages *xmlTextReaderReadNs0OrganizationPagesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct org_name_search_ns0_organizationPages *_organizationPages = calloc(1, sizeof(struct org_name_search_ns0_organizationPages));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0OrganizationPagesType(_organizationPages);
        free(_organizationPages);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "content", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}content of type {http://www.w3.org/2001/XMLSchema}anyType.\n");
#endif
        _child_accessor = xmlTextReaderReadXsAnyTypeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}content of type {http://www.w3.org/2001/XMLSchema}anyType.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrganizationPagesType(_organizationPages);
          free(_organizationPages);
          return NULL;
        }

        _organizationPages->content = ((struct xmlBasicNode*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "totalElements", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}totalElements of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}totalElements of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrganizationPagesType(_organizationPages);
          free(_organizationPages);
          return NULL;
        }

        _organizationPages->totalElements = ((long long*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "totalPages", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}totalPages of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}totalPages of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrganizationPagesType(_organizationPages);
          free(_organizationPages);
          return NULL;
        }

        _organizationPages->totalPages = ((int*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}organizationPages.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}organizationPages. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _organizationPages;
}

/**
 * Writes a OrganizationPages to XML.
 *
 * @param writer The XML writer.
 * @param _organizationPages The OrganizationPages to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0OrganizationPagesType(xmlTextWriterPtr writer, struct org_name_search_ns0_organizationPages *_organizationPages) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_organizationPages->content != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "content", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}content. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}anyType for element {}content...\n");
#endif
    status = xmlTextWriterWriteXsAnyTypeType(writer, (_organizationPages->content));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}anyType for element {}content. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}content. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_organizationPages->totalElements != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "totalElements", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}totalElements. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}totalElements...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, (_organizationPages->totalElements));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}totalElements. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}totalElements. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_organizationPages->totalPages != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "totalPages", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}totalPages. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}totalPages...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, (_organizationPages->totalPages));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}totalPages. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}totalPages. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a OrganizationPages.
 *
 * @param _organizationPages The OrganizationPages to free.
 */
static void freeNs0OrganizationPagesType(struct org_name_search_ns0_organizationPages *_organizationPages) {
  int i;
  if (_organizationPages->content != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor content of type org_name_search_ns0_organizationPages...\n");
#endif
    freeXsAnyTypeType(_organizationPages->content);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor content of type org_name_search_ns0_organizationPages...\n");
#endif
    free(_organizationPages->content);
  }
  if (_organizationPages->totalElements != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor totalElements of type org_name_search_ns0_organizationPages...\n");
#endif
    freeXsLongType(_organizationPages->totalElements);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor totalElements of type org_name_search_ns0_organizationPages...\n");
#endif
    free(_organizationPages->totalElements);
  }
  if (_organizationPages->totalPages != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor totalPages of type org_name_search_ns0_organizationPages...\n");
#endif
    freeXsIntType(_organizationPages->totalPages);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor totalPages of type org_name_search_ns0_organizationPages...\n");
#endif
    free(_organizationPages->totalPages);
  }
}
#endif /* DEF_org_name_search_ns0_organizationPages_M */
#ifndef DEF_org_name_search_ns0_organizations_M
#define DEF_org_name_search_ns0_organizations_M

/**
 * Reads a Organizations element from XML. The element to be read is "organizations", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Organizations, or NULL in case of error.
 */
struct org_name_search_ns0_organizations *xml_read_org_name_search_ns0_organizations(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0OrganizationsElement(reader);
}

/**
 * Writes a Organizations to XML under element name "organizations".
 *
 * @param writer The XML writer.
 * @param _organizations The Organizations to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_org_name_search_ns0_organizations(xmlTextWriterPtr writer, struct org_name_search_ns0_organizations *_organizations) {
  return xmlTextWriterWriteNs0OrganizationsElementNS(writer, _organizations, 1);
}

/**
 * Frees a Organizations.
 *
 * @param _organizations The Organizations to free.
 */
void free_org_name_search_ns0_organizations(struct org_name_search_ns0_organizations *_organizations) {
  freeNs0OrganizationsType(_organizations);
  free(_organizations);
}

/**
 * Reads a Organizations element from XML. The element to be read is "organizations", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Organizations, or NULL in case of error.
 */
struct org_name_search_ns0_organizations *xmlTextReaderReadNs0OrganizationsElement(xmlTextReaderPtr reader) {
  struct org_name_search_ns0_organizations *_organizations = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "organizations", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}organizations.\n");
#endif
    _organizations = xmlTextReaderReadNs0OrganizationsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_organizations == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}organizations failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}organizations failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _organizations;
}

/**
 * Writes a Organizations to XML under element name "organizations".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _organizations The Organizations to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OrganizationsElement(xmlTextWriterPtr writer, struct org_name_search_ns0_organizations *_organizations) {
  return xmlTextWriterWriteNs0OrganizationsElementNS(writer, _organizations, 0);
}

/**
 * Writes a Organizations to XML under element name "organizations".
 *
 * @param writer The XML writer.
 * @param _organizations The Organizations to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OrganizationsElementNS(xmlTextWriterPtr writer, struct org_name_search_ns0_organizations *_organizations, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organizations", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}organizations. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}organizations for root element {}organizations...\n");
#endif
  status = xmlTextWriterWriteNs0OrganizationsType(writer, _organizations);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}organizations. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}organizations. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Organizations.
 *
 * @param _organizations The Organizations whose children are to be free.
 */
static void freeNs0OrganizationsElement(struct org_name_search_ns0_organizations *_organizations) {
  freeNs0OrganizationsType(_organizations);
}

/**
 * Reads a Organizations from XML. The reader is assumed to be at the start element.
 *
 * @return the Organizations, or NULL in case of error.
 */
static struct org_name_search_ns0_organizations *xmlTextReaderReadNs0OrganizationsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct org_name_search_ns0_organizations *_organizations = calloc(1, sizeof(struct org_name_search_ns0_organizations));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0OrganizationsType(_organizations);
        free(_organizations);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "organizations", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}organizations of type {}organization.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0OrganizationType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}organizations of type {}organization.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrganizationsType(_organizations);
          free(_organizations);
          return NULL;
        }

        _organizations->organizationList = realloc(_organizations->organizationList, (_organizations->_sizeof_organizationList + 1) * sizeof(struct org_name_search_ns0_organization));
        memcpy(&(_organizations->organizationList[_organizations->_sizeof_organizationList++]), _child_accessor, sizeof(struct org_name_search_ns0_organization));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}organizations.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}organizations. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _organizations;
}

/**
 * Writes a Organizations to XML.
 *
 * @param writer The XML writer.
 * @param _organizations The Organizations to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0OrganizationsType(xmlTextWriterPtr writer, struct org_name_search_ns0_organizations *_organizations) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _organizations->_sizeof_organizationList; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organizations", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}organizations. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}organization for element {}organizations...\n");
#endif
    status = xmlTextWriterWriteNs0OrganizationType(writer, &(_organizations->organizationList[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}organization for element {}organizations. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}organizations. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Organizations.
 *
 * @param _organizations The Organizations to free.
 */
static void freeNs0OrganizationsType(struct org_name_search_ns0_organizations *_organizations) {
  int i;
  if (_organizations->organizationList != NULL) {
    for (i = 0; i < _organizations->_sizeof_organizationList; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor organizationList[%i] of type org_name_search_ns0_organizations...\n", i);
#endif
      freeNs0OrganizationType(&(_organizations->organizationList[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor organizationList of type org_name_search_ns0_organizations...\n");
#endif
    free(_organizations->organizationList);
  }
}
#endif /* DEF_org_name_search_ns0_organizations_M */
