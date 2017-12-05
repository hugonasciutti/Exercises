# Info and Tips

I'am using Android Studio's emulator.

Start with `Building Projects with Native Code`
[React Native Guide](https://facebook.github.io/react-native/docs/getting-started.html)
[Android Studio Guide](https://developer.android.com/studio/install.html)

## Errors

If you got any errors, try using older React Native versions that are more stable. Currently working `0.50.3`.

---

# Running

Got some problems when using emulators.

```bash
# Android Config
export ANDROID_HOME=$HOME/Android/Sdk
export PATH=$PATH:$ANDROID_HOME/tools
export PATH=$PATH:$ANDROID_HOME/platform-tools
export PATH=$PATH:$ANDROID_HOME/tools/emulator
alias emu="$ANDROID_HOME/tools/emulator" #Needed alias for solve file not found problem.
```

`CTRL+M` To access dev Setting, Hot Reload, Live Reload and more.
`react-native log-android` To log errors on terminal