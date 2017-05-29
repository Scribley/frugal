import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { Sun } from './sun';

@NgModule({
  declarations: [
    Sun,
  ],
  imports: [
    IonicPageModule.forChild(Sun),
  ],
  exports: [
    Sun
  ]
})
export class SunModule {}
