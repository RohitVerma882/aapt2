/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package android.aidl.tests;
/** @deprecated test */
@Deprecated
public interface IDeprecated extends android.os.IInterface
{
  /** Default implementation for IDeprecated. */
  public static class Default implements android.aidl.tests.IDeprecated
  {
    @Override
    public android.os.IBinder asBinder() {
      return null;
    }
  }
  /** Local-side IPC implementation stub class. */
  public static abstract class Stub extends android.os.Binder implements android.aidl.tests.IDeprecated
  {
    /** Construct the stub at attach it to the interface. */
    public Stub()
    {
      this.attachInterface(this, DESCRIPTOR);
    }
    /**
     * Cast an IBinder object into an android.aidl.tests.IDeprecated interface,
     * generating a proxy if needed.
     */
    public static android.aidl.tests.IDeprecated asInterface(android.os.IBinder obj)
    {
      if ((obj==null)) {
        return null;
      }
      android.os.IInterface iin = obj.queryLocalInterface(DESCRIPTOR);
      if (((iin!=null)&&(iin instanceof android.aidl.tests.IDeprecated))) {
        return ((android.aidl.tests.IDeprecated)iin);
      }
      return new android.aidl.tests.IDeprecated.Stub.Proxy(obj);
    }
    @Override public android.os.IBinder asBinder()
    {
      return this;
    }
    @Override public boolean onTransact(int code, android.os.Parcel data, android.os.Parcel reply, int flags) throws android.os.RemoteException
    {
      java.lang.String descriptor = DESCRIPTOR;
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
        default:
        {
          return super.onTransact(code, data, reply, flags);
        }
      }
    }
    private static class Proxy implements android.aidl.tests.IDeprecated
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
    }
  }
  public static final java.lang.String DESCRIPTOR = "android$aidl$tests$IDeprecated".replace('$', '.');
}
