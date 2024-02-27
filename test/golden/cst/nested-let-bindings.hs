BorealNode
    ( Original
        { start = TSPoint
            { pointRow = 0
            , pointColumn = 0
            }
        , end = TSPoint
            { pointRow = 8
            , pointColumn = 0
            }
        }
    ) "source"
    [ BorealNode
        ( Original
            { start = TSPoint
                { pointRow = 0
                , pointColumn = 0
                }
            , end = TSPoint
                { pointRow = 0
                , pointColumn = 19
                }
            }
        ) "module_declaration"
        [ BorealAtom
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 0
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 6
                    }
                }
            ) "module"
        , BorealIdent
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 7
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 14
                    }
                }
            ) "Foobar "
        , BorealAtom
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 14
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 19
                    }
                }
            ) "where"
        ]
    , BorealNode
        ( Original
            { start = TSPoint
                { pointRow = 2
                , pointColumn = 0
                }
            , end = TSPoint
                { pointRow = 7
                , pointColumn = 3
                }
            }
        ) "top_level_declarations"
        [ BorealNode
            ( Original
                { start = TSPoint
                    { pointRow = 2
                    , pointColumn = 0
                    }
                , end = TSPoint
                    { pointRow = 2
                    , pointColumn = 15
                    }
                }
            ) "function_declaration"
            [ BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 0
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 7
                        }
                    }
                ) "function_head"
                [ BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 0
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 5
                            }
                        }
                    ) "adder"
                , BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 6
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 7
                            }
                        }
                    ) "x"
                ]
            , BorealAtom
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 8
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 9
                        }
                    }
                ) "="
            , BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 10
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 15
                        }
                    }
                ) "function_body"
                [ BorealNode
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 10
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 15
                            }
                        }
                    ) "simple_expression"
                    [ BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 2
                                , pointColumn = 10
                                }
                            , end = TSPoint
                                { pointRow = 2
                                , pointColumn = 15
                                }
                            }
                        ) "binary_operation"
                        [ BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 10
                                    }
                                , end = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 11
                                    }
                                }
                            ) "simple_expression"
                            [ BorealIdent
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 10
                                        }
                                    , end = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 11
                                        }
                                    }
                                ) "x"
                            ]
                        , BorealIdent
                            ( Original
                                { start = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 12
                                    }
                                , end = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 13
                                    }
                                }
                            ) "+"
                        , BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 14
                                    }
                                , end = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 15
                                    }
                                }
                            ) "simple_expression"
                            [ BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 14
                                        }
                                    , end = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 15
                                        }
                                    }
                                ) "1"
                            ]
                        ]
                    ]
                ]
            ]
        , BorealNode
            ( Original
                { start = TSPoint
                    { pointRow = 4
                    , pointColumn = 0
                    }
                , end = TSPoint
                    { pointRow = 7
                    , pointColumn = 3
                    }
                }
            ) "function_declaration"
            [ BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 4
                        , pointColumn = 0
                        }
                    , end = TSPoint
                        { pointRow = 4
                        , pointColumn = 4
                        }
                    }
                ) "function_head"
                [ BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 4
                            , pointColumn = 0
                            }
                        , end = TSPoint
                            { pointRow = 4
                            , pointColumn = 4
                            }
                        }
                    ) "main"
                ]
            , BorealAtom
                ( Original
                    { start = TSPoint
                        { pointRow = 4
                        , pointColumn = 5
                        }
                    , end = TSPoint
                        { pointRow = 4
                        , pointColumn = 6
                        }
                    }
                ) "="
            , BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 5
                        , pointColumn = 2
                        }
                    , end = TSPoint
                        { pointRow = 7
                        , pointColumn = 3
                        }
                    }
                ) "function_body"
                [ BorealNode
                    ( Original
                        { start = TSPoint
                            { pointRow = 5
                            , pointColumn = 2
                            }
                        , end = TSPoint
                            { pointRow = 7
                            , pointColumn = 3
                            }
                        }
                    ) "let_binding"
                    [ BorealAtom
                        ( Original
                            { start = TSPoint
                                { pointRow = 5
                                , pointColumn = 2
                                }
                            , end = TSPoint
                                { pointRow = 5
                                , pointColumn = 5
                                }
                            }
                        ) "let"
                    , BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 5
                                , pointColumn = 6
                                }
                            , end = TSPoint
                                { pointRow = 5
                                , pointColumn = 7
                                }
                            }
                        ) "a"
                    , BorealAtom
                        ( Original
                            { start = TSPoint
                                { pointRow = 5
                                , pointColumn = 8
                                }
                            , end = TSPoint
                                { pointRow = 5
                                , pointColumn = 9
                                }
                            }
                        ) "="
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 5
                                , pointColumn = 10
                                }
                            , end = TSPoint
                                { pointRow = 5
                                , pointColumn = 11
                                }
                            }
                        ) "simple_expression"
                        [ BorealAtom
                            ( Original
                                { start = TSPoint
                                    { pointRow = 5
                                    , pointColumn = 10
                                    }
                                , end = TSPoint
                                    { pointRow = 5
                                    , pointColumn = 11
                                    }
                                }
                            ) "1"
                        ]
                    , BorealAtom
                        ( Original
                            { start = TSPoint
                                { pointRow = 5
                                , pointColumn = 12
                                }
                            , end = TSPoint
                                { pointRow = 5
                                , pointColumn = 14
                                }
                            }
                        ) "in"
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 6
                                , pointColumn = 2
                                }
                            , end = TSPoint
                                { pointRow = 7
                                , pointColumn = 3
                                }
                            }
                        ) "let_binding_body"
                        [ BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 6
                                    , pointColumn = 2
                                    }
                                , end = TSPoint
                                    { pointRow = 7
                                    , pointColumn = 3
                                    }
                                }
                            ) "let_binding"
                            [ BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 2
                                        }
                                    , end = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 5
                                        }
                                    }
                                ) "let"
                            , BorealIdent
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 6
                                        }
                                    , end = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 7
                                        }
                                    }
                                ) "y"
                            , BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 8
                                        }
                                    , end = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 9
                                        }
                                    }
                                ) "="
                            , BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 10
                                        }
                                    , end = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 17
                                        }
                                    }
                                ) "simple_expression"
                                [ BorealIdent
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 6
                                            , pointColumn = 10
                                            }
                                        , end = TSPoint
                                            { pointRow = 6
                                            , pointColumn = 15
                                            }
                                        }
                                    ) "adder"
                                , BorealIdent
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 6
                                            , pointColumn = 16
                                            }
                                        , end = TSPoint
                                            { pointRow = 6
                                            , pointColumn = 17
                                            }
                                        }
                                    ) "a"
                                ]
                            , BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 18
                                        }
                                    , end = TSPoint
                                        { pointRow = 6
                                        , pointColumn = 20
                                        }
                                    }
                                ) "in"
                            , BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 7
                                        , pointColumn = 2
                                        }
                                    , end = TSPoint
                                        { pointRow = 7
                                        , pointColumn = 3
                                        }
                                    }
                                ) "let_binding_body"
                                [ BorealNode
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 7
                                            , pointColumn = 2
                                            }
                                        , end = TSPoint
                                            { pointRow = 7
                                            , pointColumn = 3
                                            }
                                        }
                                    ) "simple_expression"
                                    [ BorealIdent
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 7
                                                , pointColumn = 2
                                                }
                                            , end = TSPoint
                                                { pointRow = 7
                                                , pointColumn = 3
                                                }
                                            }
                                        ) "a"
                                    ]
                                ]
                            ]
                        ]
                    ]
                ]
            ]
        ]
    ]