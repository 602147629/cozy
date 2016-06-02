import {Page, Platform} from 'ionic-angular';

@Page({
  templateUrl: './build/pages/segments/segments.html'
})
export class SegmentPage {
  pet: string = "puppies";
  isAndroid: boolean = false;

  constructor(platform: Platform) {
    this.isAndroid = platform.is('android');
  }
}