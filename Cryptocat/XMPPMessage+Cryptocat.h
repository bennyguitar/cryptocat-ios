//
//  XMPPMessage+Cryptocat.h
//  Cryptocat
//
//  Created by Thomas Balthazar on 26/09/13.
//  Copyright (c) 2013 Thomas Balthazar. All rights reserved.
//

#import "XMPPMessage.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
@interface XMPPMessage (Cryptocat)

- (BOOL)tb_isArchiveMessage;
- (BOOL)tb_isComposingMessage;
- (BOOL)tb_isPublicKeyMessage;
- (BOOL)tb_isPublicKeyRequestMessage;

@end
