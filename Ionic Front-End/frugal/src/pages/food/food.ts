import { Component } from '@angular/core';
import { NavController } from 'ionic-angular';
import { SettingsPage } from '../settings/settings';

@Component({
  selector: 'page-food',
  templateUrl: 'food.html'
})
export class FoodPage {

  constructor(public navCtrl: NavController) {}
  
  goToSettingsPage(){
    this.navCtrl.push(SettingsPage);
  }

}
