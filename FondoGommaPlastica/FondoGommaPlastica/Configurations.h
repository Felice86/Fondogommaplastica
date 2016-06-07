//
//  Configurations.h
//  FondoGommaPlastica
//
//  Created by Felice on 03/06/16.
//  Copyright © 2016 ElpoEdizioni. All rights reserved.
//

#import <Foundation/Foundation.h>

#define UIColorFromRGB(rgbValue) \
    [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
    green:((float)((rgbValue & 0x00FF00) >>  8))/255.0 \
    blue:((float)((rgbValue & 0x0000FF) >>  0))/255.0 \
    alpha:1.0]

@interface Configurations : NSObject
+ (instancetype)sharedConfiguration;
- (NSString*)idUtenteInvocatore;
- (NSString*)pswInvocatore;
- (NSString*)baseUrl;
- (NSString*)recapiti;
- (NSString*)contributi;
- (NSString*)rendimento;
- (NSString*)anagrafica;
- (NSString*)liquidazioni;
- (NSString*)abilitaUtente;
- (NSString*)usernameAdTest;
- (NSString*)passwordAdTest;
@end
