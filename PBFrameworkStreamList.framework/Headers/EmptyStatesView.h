//
//  EmptyStatesView.h
//  PhotoButler
//
//  Created by Philippe Belley on 2/9/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, EmptyState) {
    StreamsTopLevel,
    StreamsContributing,
    StreamsWatching,
    StreamsPast,
    PeopleTopLevel,
    PhotosTimeline,
    PhotosPlaces
};

@interface EmptyStatesView : UIView


@property (weak, nonatomic) IBOutlet UIButton *buttonStreamNow;
@property (weak, nonatomic) IBOutlet UIImageView *imgIcon;
@property (weak, nonatomic) IBOutlet UIImageView *imgBackground;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblDescription;
@property (strong, nonatomic) NSArray *assetAssociation;
@property (assign, nonatomic) NSUInteger currentState;

-(void)setAssetsWithState:(NSUInteger)state;
@end
