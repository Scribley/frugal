import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { Wed } from './wed';

@NgModule({
  declarations: [
    Wed,
  ],
  imports: [
    IonicPageModule.forChild(Wed),
  ],
  exports: [
    Wed
  ]
})
export class WedModule {}
