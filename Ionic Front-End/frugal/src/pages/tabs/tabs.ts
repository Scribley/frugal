import { Component } from '@angular/core';

import { FoodPage } from '../food/food';
import { DrinksPage } from '../drinks/drinks';
import { BudgetPage } from '../budget/budget';
import { HomePage } from '../home/home';

@Component({
  templateUrl: 'tabs.html'
})
export class TabsPage {

  tab1Root = HomePage;
  tab2Root = FoodPage;
  tab3Root = DrinksPage;
  tab4Root = BudgetPage;

  constructor() {

  }
}
