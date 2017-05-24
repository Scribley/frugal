import { Component } from '@angular/core';
import { NavController } from 'ionic-angular';
import { SettingsPage } from '../settings/settings';

@Component({
  selector: 'page-drinks',
  templateUrl: 'drinks.html'
})
export class DrinksPage {

  constructor(public navCtrl: NavController) {}

  goToSettingsPage(){
    this.navCtrl.push(SettingsPage);
  }

}
