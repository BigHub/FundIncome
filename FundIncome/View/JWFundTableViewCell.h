//
//  JWFundTableViewCell.h
//  FundIncome
//
//  Created by jianwei on 15/5/29.
//  Copyright (c) 2015年 Jianwei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JWFundTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *fundNOLabel;
@property (weak, nonatomic) IBOutlet UILabel *amountLabel;
@property (weak, nonatomic) IBOutlet UILabel *numLabel;

@end
