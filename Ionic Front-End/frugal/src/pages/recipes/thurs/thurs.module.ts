import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { Thurs } from './thurs';

@NgModule({
  declarations: [
    Thurs,
  ],
  imports: [
    IonicPageModule.forChild(Thurs),
  ],
  exports: [
    Thurs
  ]
})
export class ThursModule {}
