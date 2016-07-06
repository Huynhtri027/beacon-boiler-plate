package android.connecthings.com.beaconboilerplate;

import android.connecthings.adtag.adtagEnum.FEED_STATUS;
import android.connecthings.adtag.model.sdk.BeaconContent;
import android.connecthings.util.BLE_STATUS;
import android.connecthings.util.adtag.beacon.AdtagBeaconManager;
import android.connecthings.util.adtag.beacon.model.BeaconRange;
import android.connecthings.util.adtag.beacon.parser.AppleBeacon;
import android.os.Bundle;
import android.support.design.widget.FloatingActionButton;
import android.support.design.widget.Snackbar;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.TextView;

import org.altbeacon.beacon.Region;

import java.util.List;

public class
ActivityBeacon extends AppCompatActivity implements BeaconRange {

    private TextView tvBeaconNumber;
    // To get the beaconContent from the notification
    // private BeaconContent beaconContent = null;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_activity_beacon);
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        tvBeaconNumber = (TextView) findViewById(R.id.tv_beacon_number);

        FloatingActionButton fab = (FloatingActionButton) findViewById(R.id.fab);
        fab.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Snackbar.make(view, "Replace with your own action", Snackbar.LENGTH_LONG)
                        .setAction("Action", null).show();
            }
        });
        /*
        To get the beaconContent  from the notification
        if(getIntent().getExtras() != null){
            beaconContent = getIntent().getExtras().getParcelable(BEACON_CONTENT);
            if(beaconContent != null) {
                ((TextView) findViewById(R.id.beacon_content)).setText(beaconContent.getNotificationTitle());
            }
        }
         */
    }

    protected void onResume(){
        super.onResume();
        AdtagBeaconManager beaconManager = AdtagBeaconManager.getInstance();
        BLE_STATUS checkStatus = beaconManager.checkBleStatus();
        //Activate the bluetooth on start automatically
        if(checkStatus == BLE_STATUS.DISABLED) {
            if (beaconManager.isBleAccessAuthorize()) {
                beaconManager.enableBluetooth();
            }
        }
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_activity_beacon, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }

    @Override
    public void didRangeBeaconsInRegion(List<AppleBeacon> beacons, List<BeaconContent> beaconContents, Region region, BeaconContent.INFORMATION_STATUS information_status, FEED_STATUS feed_status) {
        tvBeaconNumber.setText(getString(R.string.tv_beacon_number, feed_status, beacons.size(), beaconContents.size()));
    }
}
