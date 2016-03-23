//
//  AdtagContent.h
//  ATConnectionHttp
//
//  Created by Sarra Srairi on 02/06/2015.
//  Copyright (c) 2015 R&D connecthings. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATAccess.h"
#import "ATPoi.h"
#import "ATCampaign.h"
#import <QuartzCore/QuartzCore.h>
#import "ATUrlMultimedia.h"
#import "ATUrlRoot.h"
#import "ATUser.h"
@protocol AdtagContent @end

@interface ATAdtagContent : ATJSONModel <NSDiscardableContent> {

    int maxCountProximityBeforeResetingIsDone;
    int maxCountProximityBeforeReadyForAction;
    int timeBeforeCancelingAction;
    int timeBeforeResfreshingCache;
    double maxTimeBeforeCancelingAction;
    double maxTimeBeforeRefreshingCache;
    ATAccess *access;
    ATPoi *poi;
    ATUrlRoot *urlRoot;
    ATUser * atUser;
    ATUrlMultimedia * urlMultimedia; 
}

/**
 *  ATAccess object contains information about url, and redirect url from the adtag Platform
 */
@property (strong, nonatomic) ATAccess<Optional> *access;
/**
 *  ATPoi object contains the necessary information from adtag Platform
 */
@property (strong, nonatomic) ATPoi<Optional> *poi;
/**
 *  ATCampaign indicates if a campaign is on this Content
 */
@property (strong, nonatomic) ATCampaign<Optional>* campaign;

@property (strong, nonatomic) NSString<Optional>* identifier;

/**
 *  @return the redirectUrl registred in the server (AdTag Platform), you can use it when your beacon action will redirect you to a web view
 */
-(NSString *) getRedirectUrl;
/**
 *  will update the lastproximity,the countProximty and check if the action status (isActionDone)
 *
 *  @param _beacon beacon with type CLbeacon
 */
-(BOOL)hasInformation;
/**
 * Return the value contains for a define category and field
 *
 *  @param category choose a category from Adtag platfrom categories
 *  @param field    choose a field from Adtag platform categories
 *
 *  @return value contains for this category and field, nil if category or field not found
 */
-(NSString *)getValueFromCategory:(NSString *)category
                         andField:(NSString *)field;

/**
 *  check if the cache is up to date
 */
-(BOOL) isCacheUpToDate;
/**
 *  you can update the value of maxTimeBeforeRefreshingCache prorety
 */
-(void) updateMaxCacheTime;

- (id)init;

/**
 *  @param category choose a category from Adtag platfrom categories
 *  @param field    choose a field from Adtag platform categories
 *
 *  @return true if the field contains "true" as boolean or string
 */
- (BOOL)getBooleanFromCategory:(NSString *)category
          andField:(NSString *)field;


/**
 *  @param category choose a category from Adtag platfrom categories
 *  @param field    choose a field from Adtag platform categories
 *
 * @return true if the field is empty for the category
 */
- (BOOL)isEmptyFromCategory:(NSString *)category
       andField:(NSString *)field;

/**
 * Build the url to download a static content (images, sounds, movies) from the Adtag Platform
 *
 *  @param category choose a category from Adtag platfrom categories
 *  @param field    choose a field from Adtag platform categories
 *
 *  @return the path to the static content
 */
- (NSString *) getMultimediaFromCategory:(NSString *)category
                    andField:(NSString *)field;

@end
