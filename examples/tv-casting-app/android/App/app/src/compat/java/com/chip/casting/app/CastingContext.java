package com.chip.casting.app;

import android.content.Context;
import android.widget.LinearLayout;
import androidx.fragment.app.FragmentActivity;
import com.R;

/** @deprecated Use the APIs described in /examples/tv-casting-app/APIs.md instead. */
@Deprecated
public class CastingContext {
  private FragmentActivity fragmentActivity;

  public CastingContext(FragmentActivity fragmentActivity) {
    this.fragmentActivity = fragmentActivity;
  }

  public Context getApplicationContext() {
    return fragmentActivity.getApplicationContext();
  }

  public FragmentActivity getFragmentActivity() {
    return fragmentActivity;
  }

  public LinearLayout getCommissionersLayout() {
    return (LinearLayout) fragmentActivity.findViewById(R.id.castingCommissioners);
  }
}
