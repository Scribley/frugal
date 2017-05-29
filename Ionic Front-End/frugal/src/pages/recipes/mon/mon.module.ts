import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { Mon } from './mon';

@NgModule({
  declarations: [
    Mon,
  ],
  imports: [
    IonicPageModule.forChild(Mon),
  ],
  exports: [
    Mon
  ]
})
export class MonModule {}
