import { NgModule, ErrorHandler } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { IonicApp, IonicModule, IonicErrorHandler } from 'ionic-angular';
import { MyApp } from './app.component';

import { FoodPage } from '../pages/food/food';
import { DrinksPage } from '../pages/drinks/drinks';
import { GroceriesPage } from '../pages/groceries/groceries';
import { HomePage } from '../pages/home/home';
import { TabsPage } from '../pages/tabs/tabs';
import { SettingsPage } from '../pages/settings/settings';
import { Mon } from '../pages/recipes/mon/mon';
import { Tues } from '../pages/recipes/tues/tues';
import { Wed } from '../pages/recipes/wed/wed';
import { Thurs } from '../pages/recipes/thurs/thurs';
import { Fri } from '../pages/recipes/fri/fri';
import { Sat } from '../pages/recipes/sat/sat';
import { Sun } from '../pages/recipes/sun/sun';

import { StatusBar } from '@ionic-native/status-bar';
import { SplashScreen } from '@ionic-native/splash-screen';

@NgModule({
  declarations: [
    MyApp,
    FoodPage,
    DrinksPage,
    GroceriesPage,
    HomePage,
    TabsPage,
    SettingsPage,
    Mon,
    Tues,
    Wed,
    Thurs,
    Fri,
    Sat,
    Sun

  ],
  imports: [
    BrowserModule,
    IonicModule.forRoot(MyApp)
  ],
  bootstrap: [IonicApp],
  entryComponents: [
    MyApp,
    FoodPage,
    DrinksPage,
    GroceriesPage,
    HomePage,
    TabsPage,
    SettingsPage,
    Mon,
    Tues,
    Wed,
    Thurs,
    Fri,
    Sat,
    Sun
  ],
  providers: [
    StatusBar,
    SplashScreen,
    {provide: ErrorHandler, useClass: IonicErrorHandler}
  ]
})
export class AppModule {}
