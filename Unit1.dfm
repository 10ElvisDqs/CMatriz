object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 654
  ClientWidth = 1066
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object Label1: TLabel
    Left = 144
    Top = 319
    Width = 16
    Height = 15
    Caption = 'fila'
  end
  object Label2: TLabel
    Left = 200
    Top = 319
    Width = 47
    Height = 15
    Caption = 'columna'
  end
  object Label3: TLabel
    Left = 440
    Top = 319
    Width = 16
    Height = 15
    Caption = 'fila'
  end
  object Label4: TLabel
    Left = 496
    Top = 319
    Width = 47
    Height = 15
    Caption = 'columna'
  end
  object SGA: TStringGrid
    Left = 88
    Top = 136
    Width = 233
    Height = 177
    ColCount = 1
    DefaultColWidth = 30
    DefaultRowHeight = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 0
  end
  object SGB: TStringGrid
    Left = 360
    Top = 136
    Width = 233
    Height = 177
    ColCount = 1
    DefaultColWidth = 30
    DefaultRowHeight = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 1
  end
  object SGC: TStringGrid
    Left = 632
    Top = 136
    Width = 233
    Height = 177
    ColCount = 1
    DefaultColWidth = 30
    DefaultRowHeight = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 2
  end
  object filA: TEdit
    Left = 128
    Top = 340
    Width = 48
    Height = 23
    TabOrder = 3
  end
  object colA: TEdit
    Left = 200
    Top = 340
    Width = 48
    Height = 23
    TabOrder = 4
  end
  object btn_dimencionarA: TButton
    Left = 144
    Top = 369
    Width = 75
    Height = 25
    Caption = 'dimencinar'
    TabOrder = 5
    OnClick = btn_dimencionarAClick
  end
  object filB: TEdit
    Left = 424
    Top = 340
    Width = 48
    Height = 23
    TabOrder = 6
  end
  object colB: TEdit
    Left = 496
    Top = 340
    Width = 48
    Height = 23
    TabOrder = 7
  end
  object btn_dimencinarB: TButton
    Left = 448
    Top = 369
    Width = 75
    Height = 25
    Caption = 'btn_dimencinarB'
    TabOrder = 8
    OnClick = btn_dimencinarBClick
  end
  object n: TEdit
    Left = 144
    Top = 440
    Width = 121
    Height = 23
    TabOrder = 9
  end
  object MainMenu1: TMainMenu
    Left = 992
    Top = 424
    object funciones1: TMenuItem
      Caption = 'funciones'
      object funciones2: TMenuItem
        Caption = 'sumar diagonal principal'
        object A1: TMenuItem
          Caption = 'A'
          OnClick = A1Click
        end
        object A2: TMenuItem
          Caption = 'B'
        end
      end
      object multiplicar1: TMenuItem
        Caption = 'multiplicar'
        object AB1: TMenuItem
          Caption = 'A*B'
          OnClick = AB1Click
        end
      end
      object esSimetrica1: TMenuItem
        Caption = 'esSimetrica'
        object A9: TMenuItem
          Caption = 'A'
          OnClick = A9Click
        end
      end
    end
    object procedimientos1: TMenuItem
      Caption = 'procedimientos'
      object procedimientos2: TMenuItem
        Caption = 'Tranpuesta'
        object A3: TMenuItem
          Caption = 'A'
          OnClick = A3Click
        end
        object A4: TMenuItem
          Caption = 'B'
        end
        object C1: TMenuItem
          Caption = 'C'
        end
      end
      object Identidad1: TMenuItem
        Caption = 'Identidad'
        object A5: TMenuItem
          Caption = 'A'
          OnClick = A5Click
        end
        object A6: TMenuItem
          Caption = 'B'
        end
      end
      object Identidad2: TMenuItem
        Caption = 'sumar fil y col'
        object A7: TMenuItem
          Caption = 'A'
          OnClick = A7Click
        end
        object A8: TMenuItem
          Caption = 'B'
        end
      end
    end
  end
end
