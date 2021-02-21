<manifest xmlns:android="http://schemas.android.com/apk/res/android"
    package="com.example.android.samplespellcheckerservice" >
    <application
        android:label="@string/app_name" >
        <service
            android:label="@string/app_name"
            android:name=".SampleSpellCheckerService"
            android:permission="android.permission.BIND_TEXT_SERVICE" >
            <intent-filter >
                <action android:name="android.service.textservice.SpellCheckerService" />
            </intent-filter>

            <meta-data
                android:name="android.view.textservice.scs"
                android:resource="@xml/spellchecker" />
        </service>

        <activity
            android:label="@string/sample_settings"
            android:name="SpellCheckerSettingsActivity" >
            <intent-filter >
                <action android:name="android.intent.action.MAIN" />
            </intent-filter>
        </activity>
    </application>
</manifest>
<spell-checker xmlns:android="http://schemas.android.com/apk/res/android"
        android:label="@string/spellchecker_name"
        android:settingsActivity="com.example.SpellCheckerSettingsActivity">
    <subtype
            android:label="@string/subtype_generic"
            android:subtypeLocale="en”
    />
    <subtype
            android:label="@string/subtype_generic"
            android:subtypeLocale="fr”
    />
</spell-checker>
