#import "enunciate-common.h"

@class ORG_NAME_SEARCHNS0Organizations;
@class ORG_NAME_SEARCHNS0PageResponse;
@class ORG_NAME_SEARCHNS0Organization;
@class ORG_NAME_SEARCHNS0OrganizationPages;

#ifndef DEF_ORG_NAME_SEARCHNS0Organizations_H
#define DEF_ORG_NAME_SEARCHNS0Organizations_H

/**
 * (no documentation provided)
 */
@interface ORG_NAME_SEARCHNS0Organizations : NSObject <EnunciateXML>
{
  @private
    NSArray *_organizationList;
}

/**
 * (no documentation provided)
 */
- (NSArray *) organizationList;

/**
 * (no documentation provided)
 */
- (void) setOrganizationList: (NSArray *) newOrganizationList;
@end /* interface ORG_NAME_SEARCHNS0Organizations */

#endif /* DEF_ORG_NAME_SEARCHNS0Organizations_H */
#ifndef DEF_ORG_NAME_SEARCHNS0PageResponse_H
#define DEF_ORG_NAME_SEARCHNS0PageResponse_H

/**
 * (no documentation provided)
 */
@interface ORG_NAME_SEARCHNS0PageResponse : NSObject <EnunciateXML>
{
  @private
    NSObject *_content;
    long long *_totalElements;
    int *_totalPages;
}

/**
 * (no documentation provided)
 */
- (NSObject *) content;

/**
 * (no documentation provided)
 */
- (void) setContent: (NSObject *) newContent;

/**
 * (no documentation provided)
 */
- (long long *) totalElements;

/**
 * (no documentation provided)
 */
- (void) setTotalElements: (long long *) newTotalElements;

/**
 * (no documentation provided)
 */
- (int *) totalPages;

/**
 * (no documentation provided)
 */
- (void) setTotalPages: (int *) newTotalPages;
@end /* interface ORG_NAME_SEARCHNS0PageResponse */

#endif /* DEF_ORG_NAME_SEARCHNS0PageResponse_H */
#ifndef DEF_ORG_NAME_SEARCHNS0Organization_H
#define DEF_ORG_NAME_SEARCHNS0Organization_H

/**
 * (no documentation provided)
 */
@interface ORG_NAME_SEARCHNS0Organization : NSObject <EnunciateXML>
{
  @private
    long long *_identifier;
    int _orgId;
    NSString *_orgName;
}

/**
 * (no documentation provided)
 */
- (long long *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (long long *) newIdentifier;

/**
 * (no documentation provided)
 */
- (int) orgId;

/**
 * (no documentation provided)
 */
- (void) setOrgId: (int) newOrgId;

/**
 * (no documentation provided)
 */
- (NSString *) orgName;

/**
 * (no documentation provided)
 */
- (void) setOrgName: (NSString *) newOrgName;
@end /* interface ORG_NAME_SEARCHNS0Organization */

#endif /* DEF_ORG_NAME_SEARCHNS0Organization_H */
#ifndef DEF_ORG_NAME_SEARCHNS0OrganizationPages_H
#define DEF_ORG_NAME_SEARCHNS0OrganizationPages_H

/**
 * (no documentation provided)
 */
@interface ORG_NAME_SEARCHNS0OrganizationPages : ORG_NAME_SEARCHNS0PageResponse <EnunciateXML>
{
  @private
}
@end /* interface ORG_NAME_SEARCHNS0OrganizationPages */

#endif /* DEF_ORG_NAME_SEARCHNS0OrganizationPages_H */
