//
//  AtriDatiViewController.m
//  FondoGommaPlastica
//
//  Created by Felice on 02/07/16.
//  Copyright © 2016 ElpoEdizioni. All rights reserved.
//

#import "AtriDatiViewController.h"

@implementation AtriDatiViewController

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    Aderente *aderente = [Aderente sharedAderente];
    [self iniziaCreazioneLabelForScrollView:nil];
    [self inserisciTutteLeProprietaInOggetto:aderente.recapiti contentScrollViewController:nil];
    [self inserisciLegenda:aderente.recapiti addTo:nil];
    [self.contentScrollView setContentSize:CGSizeMake(self.contentScrollView.frame.size.width, CGRectGetMaxY(frameTitoloLabel))];
}

@end
