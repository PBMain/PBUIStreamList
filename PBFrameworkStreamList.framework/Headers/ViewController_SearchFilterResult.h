//
//  ViewController_SearchFilterResult.h
//  PhotoButler
//
//  Created by Mirant Patel on 21/07/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SearchFilterCollectionViewCell.h"
@import Photos;

@interface ViewController_SearchFilterResult : UIViewController<UICollectionViewDelegateFlowLayout,UICollectionViewDataSource,UICollectionViewDelegate> {
    
    __weak IBOutlet UIBarButtonItem *barButtonTrash;
    __weak IBOutlet UIBarButtonItem *barButtonAction;
    __weak IBOutlet UIBarButtonItem *barButtonMagicAlbum;
    __weak IBOutlet UIBarButtonItem *barButtonShare;
    __weak IBOutlet UIBarButtonItem *barButtonAdd;
    __weak IBOutlet UIView *viewToolBarHide;
}
@property (weak, nonatomic) IBOutlet UILabel *lblScreenTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblSearchText;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightForIncreaseLabel;
@property (nonatomic) float cellSize;
@property (weak, nonatomic) IBOutlet UICollectionView *colvForSearchResult;

@property (weak, nonatomic) IBOutlet UILabel *lblFoundPhotosCounter;

@property (nonatomic) NSMutableAttributedString *attributedStringForPass;

@property (strong) PHFetchResult *assetsFetchResults;
@property (strong) PHCachingImageManager* imageManager;
@property (strong) NSString* paramString;
@property (nonatomic) NSMutableArray* names;

@property (nonatomic) NSMutableArray *arraySelected;
@property (nonatomic) UIToolbar *toolbar;
@property (nonatomic) BOOL isSelectionMode;

-(void) getImageTimelines;
-(void) error:(NSString*)message;
-(void) goBack:(void (^)(void))completionBlock;

@end
