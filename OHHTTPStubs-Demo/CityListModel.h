//
//  CityListModel.h
//  OHHTTPStubs-Demo
//
//  Created by Brooks on 2018/3/23.
//  Copyright © 2018年 Brooks. All rights reserved.
//

#import <JSONModel/JSONModel.h>


@protocol CityModel 
@end

@interface CityModel : JSONModel
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *first_char;
@property (nonatomic, copy) NSString *abbr;
@end


@protocol HotCityModel
@end

@interface HotCityModel : JSONModel
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *abbr;
@end


//@protocol NearbyCityModel
//@end
//
//@interface NearbyCityModel : JSONModel
//@property (nonatomic, copy) NSString *city;
//@end



@interface CityListModel : JSONModel

@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString <Optional> *errmsg;
@property (nonatomic, copy) NSString <Ignore> *current_city;
@property (nonatomic, copy) NSString *city_exists;
@property (nonatomic, strong) NSArray <CityModel> *cities;
@property (nonatomic, strong) NSArray <HotCityModel> *hot_cities;
@property (nonatomic, strong) NSArray <NSString*> *nearby_cities;


@end


