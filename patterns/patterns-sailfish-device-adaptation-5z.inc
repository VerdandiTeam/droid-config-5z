%package -n patterns-sailfish-device-adaptation-5z
Summary: Jolla HW Adaptation 5z
Requires: droid-hal-5z
Requires: droid-hal-5z-img-boot
Requires: droid-hal-5z-kernel-modules
Requires: droid-config-5z-sailfish
Requires: droid-config-5z-pulseaudio-settings
Requires: droid-config-5z-policy-settings
Requires: droid-config-5z-preinit-plugin
Requires: droid-config-5z-flashing
Requires: droid-config-5z-bluez5
Requires: droid-hal-version-5z

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
# For devices with droidmedia and gst-droid built, see HADK pdf for more information
Requires: gstreamer1.0-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
Requires: usb-moded-defaults-android
Requires: usb-moded-developer-mode-android

# Extra useful modes not officially supported:
# might need some configuration to get working
#Requires: usb-moded-mass-storage-android-config
# working but careful with roaming!
Requires: usb-moded-connection-sharing-android-config
# android diag mode only usable for certain android tools
#Requires: usb-moded-diag-mode-android

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# fingerprint scanner
Requires: sailfish-devicelock-fpd
Requires: sailfish-fpd-community
Requires: droid-biometry-fp

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# For devices with SD Card
Requires: sd-utils

# Telephony
Requires: ofono-ril-binder-plugin

# Bluetooth
Requires: bluebinder

# NFC
Requires: nfcd-binder-plugin

# Torch shortcut
Requires: jolla-settings-system-flashlight

%description -n patterns-sailfish-device-adaptation-5z
Pattern with packages for 5z HW Adaptation

%files -n patterns-sailfish-device-adaptation-5z
