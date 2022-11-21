/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package android.aidl.tests.permission.platform;
public interface IProtected extends android.os.IInterface
{
  /** Default implementation for IProtected. */
  public static class Default implements android.aidl.tests.permission.platform.IProtected
  {
    @Override public void ProtectedWithSourceAttribution(android.content.AttributionSource source) throws android.os.RemoteException
    {
    }
    @Override
    public android.os.IBinder asBinder() {
      return null;
    }
  }
  /** Local-side IPC implementation stub class. */
  public static abstract class Stub extends android.os.Binder implements android.aidl.tests.permission.platform.IProtected
  {
    /** Construct the stub at attach it to the interface. */
    public Stub()
    {
      this.attachInterface(this, DESCRIPTOR);
    }
    /**
     * Cast an IBinder object into an android.aidl.tests.permission.platform.IProtected interface,
     * generating a proxy if needed.
     */
    public static android.aidl.tests.permission.platform.IProtected asInterface(android.os.IBinder obj)
    {
      if ((obj==null)) {
        return null;
      }
      android.os.IInterface iin = obj.queryLocalInterface(DESCRIPTOR);
      if (((iin!=null)&&(iin instanceof android.aidl.tests.permission.platform.IProtected))) {
        return ((android.aidl.tests.permission.platform.IProtected)iin);
      }
      return new android.aidl.tests.permission.platform.IProtected.Stub.Proxy(obj);
    }
    @Override public android.os.IBinder asBinder()
    {
      return this;
    }
    @Override public boolean onTransact(int code, android.os.Parcel data, android.os.Parcel reply, int flags) throws android.os.RemoteException
    {
      java.lang.String descriptor = DESCRIPTOR;
      if (code >= android.os.IBinder.FIRST_CALL_TRANSACTION && code <= android.os.IBinder.LAST_CALL_TRANSACTION) {
        data.enforceInterface(descriptor);
      }
      switch (code)
      {
        case INTERFACE_TRANSACTION:
        {
          reply.writeString(descriptor);
          return true;
        }
      }
      switch (code)
      {
        case TRANSACTION_ProtectedWithSourceAttribution:
        {
          android.content.AttributionSource _arg0;
          _arg0 = data.readTypedObject(android.content.AttributionSource.CREATOR);
          data.enforceNoDataAvail();
          if (((this.permissionCheckerWrapper(android.Manifest.permission.INTERNET, this.getCallingPid(), _arg0)&&this.permissionCheckerWrapper(android.Manifest.permission.VIBRATE, this.getCallingPid(), _arg0))!=true)) {
            throw new SecurityException("Access denied, requires: allOf = {android.Manifest.permission.INTERNET, android.Manifest.permission.VIBRATE}");
          }
          this.ProtectedWithSourceAttribution(_arg0);
          reply.writeNoException();
          break;
        }
        default:
        {
          return super.onTransact(code, data, reply, flags);
        }
      }
      return true;
    }
    private static class Proxy implements android.aidl.tests.permission.platform.IProtected
    {
      private android.os.IBinder mRemote;
      Proxy(android.os.IBinder remote)
      {
        mRemote = remote;
      }
      @Override public android.os.IBinder asBinder()
      {
        return mRemote;
      }
      public java.lang.String getInterfaceDescriptor()
      {
        return DESCRIPTOR;
      }
      @Override public void ProtectedWithSourceAttribution(android.content.AttributionSource source) throws android.os.RemoteException
      {
        android.os.Parcel _data = android.os.Parcel.obtain();
        android.os.Parcel _reply = android.os.Parcel.obtain();
        try {
          _data.writeInterfaceToken(DESCRIPTOR);
          _data.writeTypedObject(source, 0);
          boolean _status = mRemote.transact(Stub.TRANSACTION_ProtectedWithSourceAttribution, _data, _reply, 0);
          _reply.readException();
        }
        finally {
          _reply.recycle();
          _data.recycle();
        }
      }
    }
    private boolean permissionCheckerWrapper(
        String permission, int pid, android.content.AttributionSource attributionSource) {
      android.content.Context ctx =
          android.app.ActivityThread.currentActivityThread().getSystemContext();
      return (android.content.PermissionChecker.checkPermissionForDataDelivery(
              ctx, permission, pid, attributionSource, "" /*message*/) ==
          android.content.PermissionChecker.PERMISSION_GRANTED);
    }
    static final int TRANSACTION_ProtectedWithSourceAttribution = (android.os.IBinder.FIRST_CALL_TRANSACTION + 0);
  }
  public static final java.lang.String DESCRIPTOR = "android$aidl$tests$permission$platform$IProtected".replace('$', '.');
  @android.annotation.EnforcePermission(allOf = {android.Manifest.permission.INTERNET, android.Manifest.permission.VIBRATE})
  public void ProtectedWithSourceAttribution(android.content.AttributionSource source) throws android.os.RemoteException;
}
