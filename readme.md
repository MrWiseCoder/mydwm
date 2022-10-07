# MrWiseCoder's build of DWM

## Introduction
I clone Chad's dwm and merge with some of the features and pathces of Luke Smith's build of dwm. And as a result this piece has emerged.

## Installation

```bash
git clone https://github.com/MrWiseCoder/mydwm
cd mydwm
sudo make install
```

## FAQ

> What are the key bindings?
You can easily find key bindings in the [config.h](config.h) file.

> How to get emoji support?
This build of dwm does not block color emoji in the status/info bar, so if your os is arch based you must install [libxft-bgra](https://aur.archlinux.org/packages/libxft-bgra/) from the AUR, which fixes a libxft color emoji rendering problem, otherwise dwm will crash upon trying to render one. Hopefully this fix will be in all libxft soon enough.
if your os is Ubuntu like mine, I could not find any solution on the net, if you can find, please share :)

> What are the patches and features?
You can find this answer by looking these two repositories below:
[LukeSmith](https://github.com/LukeSmithxyz/dwm)
[Chad](https://github.com/siduck/chadwm.git)
