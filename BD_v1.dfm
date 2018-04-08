object Form3: TForm3
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSizeToolWin
  Caption = 'PANEL ADMINISTRATORA'
  ClientHeight = 450
  ClientWidth = 750
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = -3
    Top = 6
    Width = 632
    Height = 199
    DataSource = danesamolot
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'nazwa'
        Width = 70
        Visible = True
      end
      item
        Alignment = taLeftJustify
        Expanded = False
        FieldName = 'liczbaplatow'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'ukladszkrzydel'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'rodzaj'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Czy w produkcji'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Kraj'
        Width = 70
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 0
    Top = 375
    Width = 550
    Height = 75
    DataSource = danesamolot
    TabOrder = 1
  end
  object ComboBox1: TComboBox
    Left = 89
    Top = 344
    Width = 221
    Height = 21
    TabOrder = 2
    Text = 'samolot'
    OnChange = ComboBox1Change
    Items.Strings = (
      'zdjeciesamolot'
      'logoproducenta'
      'samolot'
      'wprodukcji'
      'rodzaj'
      'kraj'
      'przewoznik'
      'listaprzewoznikow')
  end
  object Button4: TButton
    Left = 0
    Top = 344
    Width = 75
    Height = 25
    Caption = 'Default'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Memo1: TMemo
    Left = -4
    Top = 211
    Width = 157
    Height = 127
    Lines.Strings = (
      'SELECT * FROM kraj;')
    TabOrder = 4
  end
  object Panel1: TPanel
    Left = 647
    Top = 0
    Width = 103
    Height = 450
    Align = alRight
    AutoSize = True
    TabOrder = 5
    object SpeedButton4: TSpeedButton
      Left = 2
      Top = 89
      Width = 100
      Height = 90
      Caption = 'Wykonaj polecenie'
      OnClick = SpeedButtonClick
    end
    object SpeedButton6: TSpeedButton
      Left = 2
      Top = 269
      Width = 100
      Height = 90
      Caption = 'Filtr nazwy'
      OnClick = SpeedButton3Click
    end
    object SpeedButton1: TSpeedButton
      Left = 2
      Top = -181
      Width = 100
      Height = 90
      Caption = 'EXIT'
      OnClick = SpeedButton1Click
    end
    object SpeedButton5: TSpeedButton
      Left = 1
      Top = 179
      Width = 100
      Height = 90
      Cursor = crAppStart
      Caption = 'NASPEEEDOWANY'
      Visible = False
      OnClick = SpeedButton2Click
    end
    object Button5: TButton
      Left = 2
      Top = 359
      Width = 100
      Height = 90
      Caption = 'Wr'#243#263' do ekranu g'#322#243'wnego'
      TabOrder = 0
      WordWrap = True
      OnClick = Button1Click
    end
    object Button1: TButton
      Left = 2
      Top = -1
      Width = 100
      Height = 90
      Caption = 'INSERT'
      TabOrder = 1
      OnClick = Button3Click
    end
    object Button6: TButton
      Left = 2
      Top = -91
      Width = 100
      Height = 90
      Caption = 'DELETE'
      TabOrder = 2
      OnClick = Button2Click
    end
  end
  object Edit1: TEdit
    Left = 328
    Top = 344
    Width = 304
    Height = 21
    TabOrder = 6
    Text = 'WPISZ TUTAJ  CO CHCESZ WYSZUKA'#262' OPCJ'#260' FILTER'
  end
  object DBGrid2: TDBGrid
    Left = 159
    Top = 211
    Width = 462
    Height = 127
    DataSource = wyswietlaniedata
    TabOrder = 7
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Password=icewomen115;Persist Security Info=Tr' +
      'ue;User ID=postgres;Data Source=PostgreSQL35W'
    DefaultDatabase = 'samoloty'
    LoginPrompt = False
    Left = 112
    Top = 264
  end
  object danerodzaj: TDataSource
    DataSet = fk_rodzaj
    Left = 448
    Top = 272
  end
  object ADODataSet1: TADODataSet
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    CommandText = 'select * from kraj'
    Parameters = <>
    Left = 32
    Top = 264
  end
  object ADOCommand1: TADOCommand
    CommandText = 'select * from kraj'
    Connection = ADOConnection1
    Parameters = <>
    Left = 248
    Top = 272
  end
  object danesamolot: TDataSource
    DataSet = samolot
    Left = 328
    Top = 280
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    DataSource = danesamolot
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM autor,samoloty,gatunek;')
    Left = 184
    Top = 272
  end
  object samolot: TADOTable
    Active = True
    ConnectionString = 
      'Provider=MSDASQL.1;Password=icewomen115;Persist Security Info=Tr' +
      'ue;User ID=postgres;Data Source=PostgreSQL35W'
    CursorType = ctStatic
    TableName = 'samolot'
    Left = 384
    Top = 152
    object samolotid: TAutoIncField
      FieldName = 'id'
      ReadOnly = True
    end
    object samolotnazwa: TWideStringField
      FieldName = 'nazwa'
      Size = 50
    end
    object samolotliczbaplatow: TIntegerField
      FieldName = 'liczbaplatow'
    end
    object samolotukladszkrzydel: TWideStringField
      FieldName = 'ukladszkrzydel'
    end
    object samolotfk_wprodukcji: TIntegerField
      FieldName = 'fk_wprodukcji'
    end
    object samolotfk_rodzaj: TIntegerField
      FieldName = 'fk_rodzaj'
    end
    object samolotfk_kraj: TIntegerField
      FieldName = 'fk_kraj'
    end
    object samolotrodzaj: TWideStringField
      FieldKind = fkLookup
      FieldName = 'rodzaj'
      LookupDataSet = fk_rodzaj
      LookupKeyFields = 'id'
      LookupResultField = 'rodzaj'
      KeyFields = 'fk_rodzaj'
      Lookup = True
    end
    object samolotCzywprodukcji: TStringField
      FieldKind = fkLookup
      FieldName = 'Czy w produkcji'
      LookupDataSet = fk_wprodukcji
      LookupKeyFields = 'id'
      LookupResultField = 'wprodukcji'
      KeyFields = 'fk_wprodukcji'
      Lookup = True
    end
    object samolotKraj: TStringField
      FieldKind = fkLookup
      FieldName = 'Kraj'
      LookupDataSet = fk_kraj
      LookupKeyFields = 'id'
      LookupResultField = 'kraj'
      KeyFields = 'fk_kraj'
      Lookup = True
    end
  end
  object fk_rodzaj: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'rodzaj'
    Left = 560
    Top = 152
  end
  object fk_kraj: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'kraj'
    Left = 440
    Top = 152
  end
  object fk_wprodukcji: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'wprodukcji'
    Left = 496
    Top = 152
  end
  object frxChartObject1: TfrxChartObject
    Left = 568
    Top = 384
  end
  object wyswietlanie: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'samolot'
    Left = 600
    Top = 376
  end
  object wyswietlaniedata: TDataSource
    DataSet = ADODataSet1
    Left = 72
    Top = 224
  end
  object komendy: TDataSource
    DataSet = ADODataSet1
    Left = 72
    Top = 272
  end
  object wyswietlanietabela: TDataSource
    DataSet = wyswietlanie
    Left = 608
    Top = 416
  end
end
