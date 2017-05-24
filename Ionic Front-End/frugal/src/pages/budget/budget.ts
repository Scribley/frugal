import { Component } from '@angular/core';
import { NavController } from 'ionic-angular';
import { SettingsPage } from '../settings/settings';

@Component({
  selector: 'page-budget',
  templateUrl: 'budget.html'
})
export class BudgetPage {

  constructor(public navCtrl: NavController) {}
  goToSettingsPage(){
    this.navCtrl.push(SettingsPage);
  }

}
