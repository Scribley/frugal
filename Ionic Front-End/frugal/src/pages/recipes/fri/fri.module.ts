import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { Fri } from './fri';

@NgModule({
  declarations: [
    Fri,
  ],
  imports: [
    IonicPageModule.forChild(Fri),
  ],
  exports: [
    Fri
  ]
})
export class FriModule {}
