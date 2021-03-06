/*
 *  Licensed Materials - Property of IBM
 *  5725-G92 (C) Copyright IBM Corp. 2011, 2013. All Rights Reserved.
 *  US Government Users Restricted Rights - Use, duplication or
 *  disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */

//
//  WLResponseListener.h
//  WorklightStaticLibProject
//
//  Created by worklightdev on 27/01/13.
//  Copyright (c) 2013 odedr@worklight.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WLResponse.h"
#import "WLFailResponse.h"

@protocol WLResponseListener <NSObject>

-(void)onSuccess :(WLResponse *)response;

-(void)onFailure :(WLFailResponse *)response;

@end
