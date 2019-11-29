# [Markdown Cookbook](../readme.md)

## [Getting Started](./readme.md)

### Organization

Oregon-Cooler is a KabukiPress book and application; you can learn about KabukiPress in the Getting Started chapter of the KabukiPress Cookbook located at <https://github.com/kabuki-starship/kabuki.press.cookbook>. The Oregon-Cooler consists of hardware designs with associated firmware, a server, a client app, and this cookbook.

#### oregoncooler repo

The oregoncooler repo is different than the oregon-cooler repo, which is the repo that contains the shared workpace for the organization. The oregoncooler repos have a client app and website, but these are decoupled from the hardware-specific coupling of the hardware to the server requirements and specificaitons.

##### Hardware

The hardware designs can be found in the hardware folder of the Oregon-Cooler repository at <https://github.com/oregon-cooler/oregoncooler/tree/master/hardware>. Each hardware project is sorted into a directory that you can brows on GitHub using a web browser.

###### Firmware

Oregon-Cooler firmware is programmed in Modern Embedded-C++ with the Kabuki Tek Toolkit located at <https://github.com/kabuki-starship/kabuki.toolkit.tek>, which is built on top of [ARM mbed®](mbed.com). Each Oregon-Cooler hardware product has it's own firmware, that you can find in the folder for that hardware device.

###### Server

The Oregon-Cooler server is an extendable web server for a smart-home or smart-city that can be used to create a variety of different Greentech devices and platforms. The server is responsible for managing IoT device clouds, control smart-homes and cities, and provide an infostructure for addicional services.

##### oregoncooler.client Application 

The Oregon-Cooler client application interfaces with the Oregon-Cooler Server to allows you to monitor, analise, and control your smart-home and smart-city. This app is designed to allow for an unlimited number of hardware devices, each with their own unique interfaces and Machine-to-Machine interface (M2MI) requirements. Because of this, the client app is decouple from the oregoncooler repo that contains specific hardware and one implmementaiton of a server you can control with the app, but you're not limited to only controlling our server.

##### oregoncooler.website

The Oregon-Cooler website is supposed to be a KabukiPress app right now, but IMUL compiler is not working so we're using Jekyll, which you can find at <https://jekyllrb.com>.

**[<< Previous Section: Quickstart Guide](./quickstart_gude.md) | [Next Section: Summary >>](./sumary)**

## License

Copyright © 2019 [Kabuki Starship™](kabukistarship.com).

This source code form is an open-source document, the Document, that was written by and contains intellectual property. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and the GitHub repository located at the Repository. The Document is published under the Kabuki Strong Source-available License, the License, which is a non-commercial open-source license and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of the copyright holder. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
