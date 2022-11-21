/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package android.aidl.tests.nested;
public class DeeplyNested implements android.os.Parcelable
{
  public static final android.os.Parcelable.Creator<DeeplyNested> CREATOR = new android.os.Parcelable.Creator<DeeplyNested>() {
    @Override
    public DeeplyNested createFromParcel(android.os.Parcel _aidl_source) {
      DeeplyNested _aidl_out = new DeeplyNested();
      _aidl_out.readFromParcel(_aidl_source);
      return _aidl_out;
    }
    @Override
    public DeeplyNested[] newArray(int _aidl_size) {
      return new DeeplyNested[_aidl_size];
    }
  };
  @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.writeInt(0);
    int _aidl_end_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.setDataPosition(_aidl_start_pos);
    _aidl_parcel.writeInt(_aidl_end_pos - _aidl_start_pos);
    _aidl_parcel.setDataPosition(_aidl_end_pos);
  }
  public final void readFromParcel(android.os.Parcel _aidl_parcel)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    int _aidl_parcelable_size = _aidl_parcel.readInt();
    try {
      if (_aidl_parcelable_size < 4) throw new android.os.BadParcelableException("Parcelable too small");;
    } finally {
      if (_aidl_start_pos > (Integer.MAX_VALUE - _aidl_parcelable_size)) {
        throw new android.os.BadParcelableException("Overflow in the size of parcelable");
      }
      _aidl_parcel.setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
    }
  }
  @Override
  public int describeContents() {
    int _mask = 0;
    return _mask;
  }
  public static class A implements android.os.Parcelable
  {
    // Can reference deeply nested type of a sibling type.
    public byte e = android.aidl.tests.nested.DeeplyNested.B.C.D.E.OK;
    public static final android.os.Parcelable.Creator<A> CREATOR = new android.os.Parcelable.Creator<A>() {
      @Override
      public A createFromParcel(android.os.Parcel _aidl_source) {
        A _aidl_out = new A();
        _aidl_out.readFromParcel(_aidl_source);
        return _aidl_out;
      }
      @Override
      public A[] newArray(int _aidl_size) {
        return new A[_aidl_size];
      }
    };
    @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
    {
      int _aidl_start_pos = _aidl_parcel.dataPosition();
      _aidl_parcel.writeInt(0);
      _aidl_parcel.writeByte(e);
      int _aidl_end_pos = _aidl_parcel.dataPosition();
      _aidl_parcel.setDataPosition(_aidl_start_pos);
      _aidl_parcel.writeInt(_aidl_end_pos - _aidl_start_pos);
      _aidl_parcel.setDataPosition(_aidl_end_pos);
    }
    public final void readFromParcel(android.os.Parcel _aidl_parcel)
    {
      int _aidl_start_pos = _aidl_parcel.dataPosition();
      int _aidl_parcelable_size = _aidl_parcel.readInt();
      try {
        if (_aidl_parcelable_size < 4) throw new android.os.BadParcelableException("Parcelable too small");;
        if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
        e = _aidl_parcel.readByte();
      } finally {
        if (_aidl_start_pos > (Integer.MAX_VALUE - _aidl_parcelable_size)) {
          throw new android.os.BadParcelableException("Overflow in the size of parcelable");
        }
        _aidl_parcel.setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
      }
    }
    @Override
    public int describeContents() {
      int _mask = 0;
      return _mask;
    }
  }
  public static class B implements android.os.Parcelable
  {
    public static final android.os.Parcelable.Creator<B> CREATOR = new android.os.Parcelable.Creator<B>() {
      @Override
      public B createFromParcel(android.os.Parcel _aidl_source) {
        B _aidl_out = new B();
        _aidl_out.readFromParcel(_aidl_source);
        return _aidl_out;
      }
      @Override
      public B[] newArray(int _aidl_size) {
        return new B[_aidl_size];
      }
    };
    @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
    {
      int _aidl_start_pos = _aidl_parcel.dataPosition();
      _aidl_parcel.writeInt(0);
      int _aidl_end_pos = _aidl_parcel.dataPosition();
      _aidl_parcel.setDataPosition(_aidl_start_pos);
      _aidl_parcel.writeInt(_aidl_end_pos - _aidl_start_pos);
      _aidl_parcel.setDataPosition(_aidl_end_pos);
    }
    public final void readFromParcel(android.os.Parcel _aidl_parcel)
    {
      int _aidl_start_pos = _aidl_parcel.dataPosition();
      int _aidl_parcelable_size = _aidl_parcel.readInt();
      try {
        if (_aidl_parcelable_size < 4) throw new android.os.BadParcelableException("Parcelable too small");;
      } finally {
        if (_aidl_start_pos > (Integer.MAX_VALUE - _aidl_parcelable_size)) {
          throw new android.os.BadParcelableException("Overflow in the size of parcelable");
        }
        _aidl_parcel.setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
      }
    }
    @Override
    public int describeContents() {
      int _mask = 0;
      return _mask;
    }
    public static class C implements android.os.Parcelable
    {
      public static final android.os.Parcelable.Creator<C> CREATOR = new android.os.Parcelable.Creator<C>() {
        @Override
        public C createFromParcel(android.os.Parcel _aidl_source) {
          C _aidl_out = new C();
          _aidl_out.readFromParcel(_aidl_source);
          return _aidl_out;
        }
        @Override
        public C[] newArray(int _aidl_size) {
          return new C[_aidl_size];
        }
      };
      @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
      {
        int _aidl_start_pos = _aidl_parcel.dataPosition();
        _aidl_parcel.writeInt(0);
        int _aidl_end_pos = _aidl_parcel.dataPosition();
        _aidl_parcel.setDataPosition(_aidl_start_pos);
        _aidl_parcel.writeInt(_aidl_end_pos - _aidl_start_pos);
        _aidl_parcel.setDataPosition(_aidl_end_pos);
      }
      public final void readFromParcel(android.os.Parcel _aidl_parcel)
      {
        int _aidl_start_pos = _aidl_parcel.dataPosition();
        int _aidl_parcelable_size = _aidl_parcel.readInt();
        try {
          if (_aidl_parcelable_size < 4) throw new android.os.BadParcelableException("Parcelable too small");;
        } finally {
          if (_aidl_start_pos > (Integer.MAX_VALUE - _aidl_parcelable_size)) {
            throw new android.os.BadParcelableException("Overflow in the size of parcelable");
          }
          _aidl_parcel.setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
        }
      }
      @Override
      public int describeContents() {
        int _mask = 0;
        return _mask;
      }
      public static class D implements android.os.Parcelable
      {
        public static final android.os.Parcelable.Creator<D> CREATOR = new android.os.Parcelable.Creator<D>() {
          @Override
          public D createFromParcel(android.os.Parcel _aidl_source) {
            D _aidl_out = new D();
            _aidl_out.readFromParcel(_aidl_source);
            return _aidl_out;
          }
          @Override
          public D[] newArray(int _aidl_size) {
            return new D[_aidl_size];
          }
        };
        @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
        {
          int _aidl_start_pos = _aidl_parcel.dataPosition();
          _aidl_parcel.writeInt(0);
          int _aidl_end_pos = _aidl_parcel.dataPosition();
          _aidl_parcel.setDataPosition(_aidl_start_pos);
          _aidl_parcel.writeInt(_aidl_end_pos - _aidl_start_pos);
          _aidl_parcel.setDataPosition(_aidl_end_pos);
        }
        public final void readFromParcel(android.os.Parcel _aidl_parcel)
        {
          int _aidl_start_pos = _aidl_parcel.dataPosition();
          int _aidl_parcelable_size = _aidl_parcel.readInt();
          try {
            if (_aidl_parcelable_size < 4) throw new android.os.BadParcelableException("Parcelable too small");;
          } finally {
            if (_aidl_start_pos > (Integer.MAX_VALUE - _aidl_parcelable_size)) {
              throw new android.os.BadParcelableException("Overflow in the size of parcelable");
            }
            _aidl_parcel.setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
          }
        }
        @Override
        public int describeContents() {
          int _mask = 0;
          return _mask;
        }
        public static @interface E {
          public static final byte OK = 0;
        }
      }
    }
  }
}
