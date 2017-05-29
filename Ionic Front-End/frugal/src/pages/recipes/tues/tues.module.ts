import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { Tues } from './tues';

@NgModule({
  declarations: [
    Tues,
  ],
  imports: [
    IonicPageModule.forChild(Tues),
  ],
  exports: [
    Tues
  ]
})
export class TuesModule {}
