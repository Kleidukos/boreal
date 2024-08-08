BorealNode
    ( Original
        { start = TSPoint
            { pointRow = 0
            , pointColumn = 0
            }
        , end = TSPoint
            { pointRow = 5
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
                    , pointColumn = 13
                    }
                }
            ) "Module"
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
                { pointRow = 4
                , pointColumn = 17
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
                    , pointColumn = 19
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
                        , pointColumn = 5
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
                    ) "main1"
                ]
            , BorealAtom
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
                ) "="
            , BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 8
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 19
                        }
                    }
                ) "function_body"
                [ BorealNode
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 8
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 19
                            }
                        }
                    ) "simple_expression"
                    [ BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 2
                                , pointColumn = 8
                                }
                            , end = TSPoint
                                { pointRow = 2
                                , pointColumn = 19
                                }
                            }
                        ) "binary_operation"
                        [ BorealNode
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
                            ) "simple_expression"
                            [ BorealAtom
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
                                ) "1"
                            ]
                        , BorealIdent
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
                            ) "-"
                        , BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 12
                                    }
                                , end = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 19
                                    }
                                }
                            ) "simple_expression"
                            [ BorealAtom
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
                                ) "("
                            , BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 13
                                        }
                                    , end = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 18
                                        }
                                    }
                                ) "simple_expression"
                                [ BorealNode
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 2
                                            , pointColumn = 13
                                            }
                                        , end = TSPoint
                                            { pointRow = 2
                                            , pointColumn = 18
                                            }
                                        }
                                    ) "binary_operation"
                                    [ BorealNode
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 13
                                                }
                                            , end = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 14
                                                }
                                            }
                                        ) "simple_expression"
                                        [ BorealAtom
                                            ( Original
                                                { start = TSPoint
                                                    { pointRow = 2
                                                    , pointColumn = 13
                                                    }
                                                , end = TSPoint
                                                    { pointRow = 2
                                                    , pointColumn = 14
                                                    }
                                                }
                                            ) "2"
                                        ]
                                    , BorealIdent
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 15
                                                }
                                            , end = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 16
                                                }
                                            }
                                        ) "+"
                                    , BorealNode
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 17
                                                }
                                            , end = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 18
                                                }
                                            }
                                        ) "simple_expression"
                                        [ BorealAtom
                                            ( Original
                                                { start = TSPoint
                                                    { pointRow = 2
                                                    , pointColumn = 17
                                                    }
                                                , end = TSPoint
                                                    { pointRow = 2
                                                    , pointColumn = 18
                                                    }
                                                }
                                            ) "3"
                                        ]
                                    ]
                                ]
                            , BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 18
                                        }
                                    , end = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 19
                                        }
                                    }
                                ) ")"
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
                    { pointRow = 4
                    , pointColumn = 17
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
                        , pointColumn = 5
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
                            , pointColumn = 5
                            }
                        }
                    ) "main2"
                ]
            , BorealAtom
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
                ) "="
            , BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 4
                        , pointColumn = 8
                        }
                    , end = TSPoint
                        { pointRow = 4
                        , pointColumn = 17
                        }
                    }
                ) "function_body"
                [ BorealNode
                    ( Original
                        { start = TSPoint
                            { pointRow = 4
                            , pointColumn = 8
                            }
                        , end = TSPoint
                            { pointRow = 4
                            , pointColumn = 17
                            }
                        }
                    ) "simple_expression"
                    [ BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 4
                                , pointColumn = 8
                                }
                            , end = TSPoint
                                { pointRow = 4
                                , pointColumn = 17
                                }
                            }
                        ) "binary_operation"
                        [ BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 8
                                    }
                                , end = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 13
                                    }
                                }
                            ) "simple_expression"
                            [ BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 8
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 13
                                        }
                                    }
                                ) "binary_operation"
                                [ BorealNode
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
                                    ) "simple_expression"
                                    [ BorealAtom
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
                                        ) "1"
                                    ]
                                , BorealIdent
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
                                    ) "-"
                                , BorealNode
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
                                    ) "simple_expression"
                                    [ BorealAtom
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
                                        ) "2"
                                    ]
                                ]
                            ]
                        , BorealIdent
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
                            ) "+"
                        , BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 16
                                    }
                                , end = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 17
                                    }
                                }
                            ) "simple_expression"
                            [ BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 16
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 17
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