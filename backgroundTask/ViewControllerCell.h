//
//  ViewControllerCell.h
//  backgroundTask
//
//  Created by jasmin vidja on 18/06/16.
//  Copyright © 2016 Malay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewControllerCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *lblLink;
@property (weak, nonatomic) IBOutlet UILabel *lblMB;
@property (weak, nonatomic) IBOutlet UIButton *btnDownload;
@property (weak, nonatomic) IBOutlet UIProgressView *progressView;
@end
