import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { Sat } from './sat';

@NgModule({
  declarations: [
    Sat,
  ],
  imports: [
    IonicPageModule.forChild(Sat),
  ],
  exports: [
    Sat
  ]
})
export class SatModule {}
