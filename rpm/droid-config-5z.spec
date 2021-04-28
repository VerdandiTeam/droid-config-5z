# These and other macros are documented in ../droid-configs-device/droid-configs.inc
# Feel free to cleanup this file by removing comments, once you have memorised them ;)

%define device Z01R
%define vendor asus

%define rpm_device 5z
%define rpm_vendor asus

%define vendor_pretty ASUS
%define device_pretty Zenfone 5z

# Community HW adaptations need this
%define community_adaptation 1

%define pixel_ratio 1.6

Provides: ofono-configs
Obsoletes: ofono-configs-mer

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-5z.inc
%include patterns/patterns-sailfish-device-configuration-5z.inc
