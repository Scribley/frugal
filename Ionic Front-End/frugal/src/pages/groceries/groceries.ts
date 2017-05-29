import { Component } from '@angular/core';
import { ModalController } from 'ionic-angular';
import { SettingsPage } from '../settings/settings';

@Component({
  selector: 'page-groceries',
  templateUrl: 'groceries.html',


})
export class GroceriesPage {

  constructor(public modalCtrl: ModalController) {}

  openModal() {
    let myModal = this.modalCtrl.create(SettingsPage);
    myModal.present();
  }


}
