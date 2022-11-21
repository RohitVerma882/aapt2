/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package android.aidl.tests.permission;
public interface IProtected extends android.os.IInterface
{
  /** Default implementation for IProtected. */
  public static class Default implements android.aidl.tests.permission.IProtected
  {
    @Override public void PermissionProtected() throws android.os.RemoteException
    {
    }
    @Override public void MultiplePermissionsAll() throws android.os.RemoteException
    {
    }
    @Override public void MultiplePermissionsAny() throws android.os.RemoteException
    {
    }
    @Override public void NonManifestPermission() throws android.os.RemoteException
    {
    }
    @Override
    public android.os.IBinder asBinder() {
      return null;
    }
  }
  /** Local-side IPC implementation stub class. */
  public static abstract class Stub extends android.os.Binder implements android.aidl.tests.permission.IProtected
  {
    /** Construct the stub at attach it to the interface. */
    public Stub()
    {
      this.attachInterface(this, DESCRIPTOR);
    }
    /**
     * Cast an IBinder object into an android.aidl.tests.permission.IProtected interface,
     * generating a proxy if needed.
     */
    public static android.aidl.tests.permission.IProtected asInterface(android.os.IBinder obj)
    {
      if ((obj==null)) {
        return null;
      }
      android.os.IInterface iin = obj.queryLocalInterface(DESCRIPTOR);
      if (((iin!=null)&&(iin instanceof android.aidl.tests.permission.IProtected))) {
        return ((android.aidl.tests.permission.IProtected)iin);
      }
      return new android.aidl.tests.permission.IProtected.Stub.Proxy(obj);
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
        case TRANSACTION_PermissionProtected:
        {
          if ((this.permissionCheckerWrapper(android.Manifest.permission.READ_PHONE_STATE, this.getCallingPid(), new android.content.AttributionSource(getCallingUid(), null, null))!=true)) {
            throw new SecurityException("Access denied, requires: android.Manifest.permission.READ_PHONE_STATE");
          }
          this.PermissionProtected();
          reply.writeNoException();
          break;
        }
        case TRANSACTION_MultiplePermissionsAll:
        {
          if (((this.permissionCheckerWrapper(android.Manifest.permission.INTERNET, this.getCallingPid(), new android.content.AttributionSource(getCallingUid(), null, null))&&this.permissionCheckerWrapper(android.Manifest.permission.VIBRATE, this.getCallingPid(), new android.content.AttributionSource(getCallingUid(), null, null)))!=true)) {
            throw new SecurityException("Access denied, requires: allOf = {android.Manifest.permission.INTERNET, android.Manifest.permission.VIBRATE}");
          }
          this.MultiplePermissionsAll();
          reply.writeNoException();
          break;
        }
        case TRANSACTION_MultiplePermissionsAny:
        {
          if (((this.permissionCheckerWrapper(android.Manifest.permission.INTERNET, this.getCallingPid(), new android.content.AttributionSource(getCallingUid(), null, null))||this.permissionCheckerWrapper(android.Manifest.permission.VIBRATE, this.getCallingPid(), new android.content.AttributionSource(getCallingUid(), null, null)))!=true)) {
            throw new SecurityException("Access denied, requires: anyOf = {android.Manifest.permission.INTERNET, android.Manifest.permission.VIBRATE}");
          }
          this.MultiplePermissionsAny();
          reply.writeNoException();
          break;
        }
        case TRANSACTION_NonManifestPermission:
        {
          if ((this.permissionCheckerWrapper(android.net.NetworkStack.PERMISSION_MAINLINE_NETWORK_STACK, this.getCallingPid(), new android.content.AttributionSource(getCallingUid(), null, null))!=true)) {
            throw new SecurityException("Access denied, requires: android.net.NetworkStack.PERMISSION_MAINLINE_NETWORK_STACK");
          }
          this.NonManifestPermission();
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
    private static class Proxy implements android.aidl.tests.permission.IProtected
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
      @Override public void PermissionProtected() throws android.os.RemoteException
      {
        android.os.Parcel _data = android.os.Parcel.obtain();
        android.os.Parcel _reply = android.os.Parcel.obtain();
        try {
          _data.writeInterfaceToken(DESCRIPTOR);
          boolean _status = mRemote.transact(Stub.TRANSACTION_PermissionProtected, _data, _reply, 0);
          _reply.readException();
        }
        finally {
          _reply.recycle();
          _data.recycle();
        }
      }
      @Override public void MultiplePermissionsAll() throws android.os.RemoteException
      {
        android.os.Parcel _data = android.os.Parcel.obtain();
        android.os.Parcel _reply = android.os.Parcel.obtain();
        try {
          _data.writeInterfaceToken(DESCRIPTOR);
          boolean _status = mRemote.transact(Stub.TRANSACTION_MultiplePermissionsAll, _data, _reply, 0);
          _reply.readException();
        }
        finally {
          _reply.recycle();
          _data.recycle();
        }
      }
      @Override public void MultiplePermissionsAny() throws android.os.RemoteException
      {
        android.os.Parcel _data = android.os.Parcel.obtain();
        android.os.Parcel _reply = android.os.Parcel.obtain();
        try {
          _data.writeInterfaceToken(DESCRIPTOR);
          boolean _status = mRemote.transact(Stub.TRANSACTION_MultiplePermissionsAny, _data, _reply, 0);
          _reply.readException();
        }
        finally {
          _reply.recycle();
          _data.recycle();
        }
      }
      @Override public void NonManifestPermission() throws android.os.RemoteException
      {
        android.os.Parcel _data = android.os.Parcel.obtain();
        android.os.Parcel _reply = android.os.Parcel.obtain();
        try {
          _data.writeInterfaceToken(DESCRIPTOR);
          boolean _status = mRemote.transact(Stub.TRANSACTION_NonManifestPermission, _data, _reply, 0);
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
    static final int TRANSACTION_PermissionProtected = (android.os.IBinder.FIRST_CALL_TRANSACTION + 0);
    static final int TRANSACTION_MultiplePermissionsAll = (android.os.IBinder.FIRST_CALL_TRANSACTION + 1);
    static final int TRANSACTION_MultiplePermissionsAny = (android.os.IBinder.FIRST_CALL_TRANSACTION + 2);
    static final int TRANSACTION_NonManifestPermission = (android.os.IBinder.FIRST_CALL_TRANSACTION + 3);
  }
  public static final java.lang.String DESCRIPTOR = "android$aidl$tests$permission$IProtected".replace('$', '.');
  @android.annotation.EnforcePermission(android.Manifest.permission.READ_PHONE_STATE)
  public void PermissionProtected() throws android.os.RemoteException;
  @android.annotation.EnforcePermission(allOf = {android.Manifest.permission.INTERNET, android.Manifest.permission.VIBRATE})
  public void MultiplePermissionsAll() throws android.os.RemoteException;
  @android.annotation.EnforcePermission(anyOf = {android.Manifest.permission.INTERNET, android.Manifest.permission.VIBRATE})
  public void MultiplePermissionsAny() throws android.os.RemoteException;
  @android.annotation.EnforcePermission(android.net.NetworkStack.PERMISSION_MAINLINE_NETWORK_STACK)
  public void NonManifestPermission() throws android.os.RemoteException;
}
