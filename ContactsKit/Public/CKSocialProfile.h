//
//  CKSocialContact.h
//  ContactsKit
//
//  Created by Sergey Popov on 1/18/16.
//  Copyright (c) 2016 Sergey Popov <serj@ttitt.ru>
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to
//  deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, CKSocialProfileService)
{
    CKSocialProfileServiceUnknown  = 0,
    CKSocialProfileServiceTwitter,       // Twitter
    CKSocialProfileServiceFacebook,      // Facebook
    CKSocialProfileServiceLinkedIn,      // LinkedIn
    CKSocialProfileServiceFlickr,        // Flickr
    CKSocialProfileServiceMyspace,       // Myspace
    CKSocialProfileServiceSinaWeibo,     // SinaWeibo
};

@interface CKSocialProfile : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (nonatomic, strong, readonly) NSURL *URL;
@property (nonatomic, strong, readonly) NSString *username;
@property (nonatomic, strong, readonly) NSString *userIdentifier;
@property (nonatomic, strong, readonly) NSString *service;
@property (nonatomic, assign, readonly) CKSocialProfileService serviceType;

@end

@interface CKMutableSocialProfile : CKSocialProfile

@property (nonatomic, strong) NSURL *URL;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *userIdentifier;
@property (nonatomic, strong) NSString *service;
@property (nonatomic, assign) CKSocialProfileService serviceType;

@end
