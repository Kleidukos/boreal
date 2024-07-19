BorealNode
    ( Original
        { start = TSPoint
            { pointRow = 0
            , pointColumn = 0
            }
        , end = TSPoint
            { pointRow = 6
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
                , pointColumn = 18
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
                    , pointColumn = 13
                    }
                }
            ) "LetIn "
        , BorealAtom
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 13
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 18
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
                { pointRow = 5
                , pointColumn = 7
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
                    { pointRow = 5
                    , pointColumn = 7
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
                        , pointColumn = 13
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
                            , pointColumn = 13
                            }
                        }
                    ) "otherfunction"
                ]
            , BorealAtom
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
                ) "="
            , BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 3
                        , pointColumn = 2
                        }
                    , end = TSPoint
                        { pointRow = 5
                        , pointColumn = 7
                        }
                    }
                ) "function_body"
                [ BorealNode
                    ( Original
                        { start = TSPoint
                            { pointRow = 3
                            , pointColumn = 2
                            }
                        , end = TSPoint
                            { pointRow = 5
                            , pointColumn = 7
                            }
                        }
                    ) "let_binding"
                    [ BorealAtom
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 2
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 5
                                }
                            }
                        ) "let"
                    , BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 6
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 7
                                }
                            }
                        ) "x"
                    , BorealAtom
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 8
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 9
                                }
                            }
                        ) "="
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 10
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 11
                                }
                            }
                        ) "simple_expression"
                        [ BorealAtom
                            ( Original
                                { start = TSPoint
                                    { pointRow = 3
                                    , pointColumn = 10
                                    }
                                , end = TSPoint
                                    { pointRow = 3
                                    , pointColumn = 11
                                    }
                                }
                            ) "3"
                        ]
                    , BorealAtom
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 12
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 14
                                }
                            }
                        ) "in"
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 4
                                , pointColumn = 2
                                }
                            , end = TSPoint
                                { pointRow = 5
                                , pointColumn = 7
                                }
                            }
                        ) "let_binding_body"
                        [ BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 2
                                    }
                                , end = TSPoint
                                    { pointRow = 5
                                    , pointColumn = 7
                                    }
                                }
                            ) "let_binding"
                            [ BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 2
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 5
                                        }
                                    }
                                ) "let"
                            , BorealIdent
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 6
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 7
                                        }
                                    }
                                ) "y"
                            , BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 8
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 9
                                        }
                                    }
                                ) "="
                            , BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 10
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 15
                                        }
                                    }
                                ) "simple_expression"
                                [ BorealNode
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 4
                                            , pointColumn = 10
                                            }
                                        , end = TSPoint
                                            { pointRow = 4
                                            , pointColumn = 15
                                            }
                                        }
                                    ) "binary_operation"
                                    [ BorealNode
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 4
                                                , pointColumn = 10
                                                }
                                            , end = TSPoint
                                                { pointRow = 4
                                                , pointColumn = 11
                                                }
                                            }
                                        ) "simple_expression"
                                        [ BorealIdent
                                            ( Original
                                                { start = TSPoint
                                                    { pointRow = 4
                                                    , pointColumn = 10
                                                    }
                                                , end = TSPoint
                                                    { pointRow = 4
                                                    , pointColumn = 11
                                                    }
                                                }
                                            ) "x"
                                        ]
                                    , BorealIdent
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 4
                                                , pointColumn = 12
                                                }
                                            , end = TSPoint
                                                { pointRow = 4
                                                , pointColumn = 13
                                                }
                                            }
                                        ) "+"
                                    , BorealNode
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 4
                                                , pointColumn = 14
                                                }
                                            , end = TSPoint
                                                { pointRow = 4
                                                , pointColumn = 15
                                                }
                                            }
                                        ) "simple_expression"
                                        [ BorealAtom
                                            ( Original
                                                { start = TSPoint
                                                    { pointRow = 4
                                                    , pointColumn = 14
                                                    }
                                                , end = TSPoint
                                                    { pointRow = 4
                                                    , pointColumn = 15
                                                    }
                                                }
                                            ) "1"
                                        ]
                                    ]
                                ]
                            , BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 16
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 18
                                        }
                                    }
                                ) "in"
                            , BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 5
                                        , pointColumn = 2
                                        }
                                    , end = TSPoint
                                        { pointRow = 5
                                        , pointColumn = 7
                                        }
                                    }
                                ) "let_binding_body"
                                [ BorealNode
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 5
                                            , pointColumn = 2
                                            }
                                        , end = TSPoint
                                            { pointRow = 5
                                            , pointColumn = 7
                                            }
                                        }
                                    ) "simple_expression"
                                    [ BorealNode
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 5
                                                , pointColumn = 2
                                                }
                                            , end = TSPoint
                                                { pointRow = 5
                                                , pointColumn = 7
                                                }
                                            }
                                        ) "binary_operation"
                                        [ BorealNode
                                            ( Original
                                                { start = TSPoint
                                                    { pointRow = 5
                                                    , pointColumn = 2
                                                    }
                                                , end = TSPoint
                                                    { pointRow = 5
                                                    , pointColumn = 3
                                                    }
                                                }
                                            ) "simple_expression"
                                            [ BorealIdent
                                                ( Original
                                                    { start = TSPoint
                                                        { pointRow = 5
                                                        , pointColumn = 2
                                                        }
                                                    , end = TSPoint
                                                        { pointRow = 5
                                                        , pointColumn = 3
                                                        }
                                                    }
                                                ) "y"
                                            ]
                                        , BorealIdent
                                            ( Original
                                                { start = TSPoint
                                                    { pointRow = 5
                                                    , pointColumn = 4
                                                    }
                                                , end = TSPoint
                                                    { pointRow = 5
                                                    , pointColumn = 5
                                                    }
                                                }
                                            ) "*"
                                        , BorealNode
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
                                            ) "simple_expression"
                                            [ BorealAtom
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
                                                ) "3"
                                            ]
                                        ]
                                    ]
                                ]
                            ]
                        ]
                    ]
                ]
            ]
        ]
    ]