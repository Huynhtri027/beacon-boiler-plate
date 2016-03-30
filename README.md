# beacon-boiler-plate

The Beacon Boiler Plate is a ready-to-use project for Connecthings’ SDK on iOs and Android.

It consists in ready-made code for notifications (when the application is in the background), and alerts (when the application is in the foreground)

## Android and Gradle

Before you can starting leveraging the project on Android, you have to configure your access to our nexus server with **Gradle**.

1. Create a .gradle folder at the **root of your home directory** (if a folder does not exist already)

     - be careful to **NOT to create it at the root of the project** directory

2. Create a gradle.properties file inside the .gradle folder

3. Add the following parameters to the gradle.properties:

     - forgeMavenUser=xxxxxxx

     - forgeMavenPassword=xxxxxxx

You can now clone and start working with the project!

## Are you ready to start?

1. Clone the project

2. Open the project with **xCode** or **Android Studio**

3. Open **AppDelegate** or **ApplicationBeacon**

4. Configure the SDK inside **AppDelegate** (iOs) or **ApplicationBeacon** (Android)

   - Enter the UUID of your beacons

   - Choose the platform you would like to access (Demo, Preprod, Prod)

   - Enter the login, password, company you have received from Connecthings

5. Activate your beacon

6. Launch your application on a phone

7. After a few seconds, you should see after few seconds "BACKEND_SUCCESS, 1 detected beacon, 1 attached content(s)"

Felicitation! You can now imagine great applications based on beacons!
