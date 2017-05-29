import { Component } from '@angular/core';
import { ModalController } from 'ionic-angular';
import { SettingsPage } from '../settings/settings';
import { FoodPage } from '../food/food';

@Component({
  selector: 'page-home',
  templateUrl: 'home.html'
})
export class HomePage {
  foodPage = FoodPage;

  constructor(public modalCtrl: ModalController) { }

  openModal() {
    let myModal = this.modalCtrl.create(SettingsPage);
    myModal.present();
  }
}
