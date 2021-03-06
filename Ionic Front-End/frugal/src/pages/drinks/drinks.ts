import { Component } from '@angular/core';
import { ModalController } from 'ionic-angular';
import { SettingsPage } from '../settings/settings';

@Component({
  selector: 'page-drinks',
  templateUrl: 'drinks.html'
})
export class DrinksPage {

  constructor(public modalCtrl: ModalController) { }

  openModal() {
    let myModal = this.modalCtrl.create(SettingsPage);
    myModal.present();
  }

}
