import { Component } from '@angular/core';
import { ModalController } from 'ionic-angular';
import { NavController } from 'ionic-angular';
import { SettingsPage } from '../settings/settings';
import { Mon } from '../recipes/mon/mon';
import { Tues } from '../recipes/tues/tues';
import { Wed } from '../recipes/wed/wed';
import { Thurs } from '../recipes/thurs/thurs';
import { Fri } from '../recipes/fri/fri';
import { Sat } from '../recipes/sat/sat';
import { Sun } from '../recipes/sun/sun';





@Component({
  selector: 'page-food',
  templateUrl: 'food.html'
})
export class FoodPage {

  mon = Mon;
  tues = Tues;
  wed = Wed;
  thurs = Thurs;
  fri = Fri;
  sat = Sat;
  sun = Sun;

  doRefresh(refresher) {
    console.log('Begin async operation', refresher);

    setTimeout(() => {
      console.log('Async operation has ended');
      refresher.complete();
    }, 2000);
  }



  shownGroup = null;

  meals = [ { title: "Chicken Stir Fry", description: "A quick and easy dish to prepare, this chicken stir-fry is packed with veggies."},
            { title: "Hamburgers", description: "These burgers are the best on the grill in the summertime. Jam-packed with all kinds of stuff, and no tasteless bread crumbs!"},
            { title: "Lasagne", description: "Beef Lasagne is one of those all-time family favourites, and this recipe is an absolute classic."},
            { title: "Spaghetti Bolognese", description: "This ultimate pasta recipe is a total classic, delicious, and super-easy to knock together."},
            { title: "Vegetable Pasta", description: 'Pasta makes for an easy and economical vegetarian meal. Use your favourite vegetables to whip up a variety of vegetarian pasta recipes. For an extra dose of protein add lentils into the mix.'},
            { title: "Salmon", description: "Packed with healthy fats, plus lots of vitamins and minerals, salmon is not only healthy but extremely versatile as this recipe"},
            { title: "Eggs on Toast", description: "Enjoy an updated take on baked eggs with this quick recipe for the lightest, fluffiest cloud eggs on buttery toast!"}]

  imgURL = ["img/food7.jpg","img/food5.jpg","img/food6.jpg","img/food3.jpg","img/food4.jpg","img/food1.jpg","img/food2.jpg"]

  week = [ {day: "Monday", short: this.mon }, {day: "Tuesday", short: this.tues }, {day: "Wednesday", short: this.wed }, {day: "Thursday", short: this.thurs },
  { day: "Friday", short: this.fri }, { day: "Saturday", short: this.sat }, { day:"Sunday", short: this.sun }]


  constructor(public modalCtrl: ModalController) { }

  openModal() {
    let myModal = this.modalCtrl.create(SettingsPage);
    myModal.present();
  }

}
