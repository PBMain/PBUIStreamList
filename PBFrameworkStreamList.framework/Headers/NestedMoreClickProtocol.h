//
//  NestedMoreClickProtocol.h
//  PhotoButler
//
//  Created by Philippe Belley on 10/28/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#ifndef NestedMoreClickProtocol_h
#define NestedMoreClickProtocol_h

@protocol NestedMoreClickProtocol <NSObject>
@required
- (void) itemClickedWithTag: (NSInteger) tag;
@end
#endif /* NestedMoreClickProtocol_h */
