import {App, IonicApp, Page} from 'ionic-angular';
import {
  Control,
  ControlGroup,
  NgForm,
  Validators,
  NgControl,
  ControlValueAccessor,
  NgControlName,
  NgFormModel,
  FormBuilder
} from '@angular/common';


@Page({
  templateUrl: './build/pages/radios/radios.html'
})
export class RadiosPage {
  langs;
  langForm;

  constructor() {
    this.langs = new Control("");
    this.langForm = new ControlGroup({
      "langs": this.langs
    });
  }

  doSubmit(event) {
    console.log('Submitting form', this.langForm.value);
    event.preventDefault();
  }
}
