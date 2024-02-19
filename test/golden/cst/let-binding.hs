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
                { pointRow = 4
                , pointColumn = 11
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
                    { pointRow = 4
                    , pointColumn = 11
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
                        { pointRow = 4
                        , pointColumn = 11
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
                            { pointRow = 4
                            , pointColumn = 11
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
                                { pointRow = 4
                                , pointColumn = 3
                                }
                            , end = TSPoint
                                { pointRow = 4
                                , pointColumn = 5
                                }
                            }
                        ) "in"
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 4
                                , pointColumn = 6
                                }
                            , end = TSPoint
                                { pointRow = 4
                                , pointColumn = 11
                                }
                            }
                        ) "simple_expression"
                        [ BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 6
                                    }
                                , end = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 11
                                    }
                                }
                            ) "binary_operation"
                            [ BorealNode
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
                                ) "simple_expression"
                                [ BorealIdent
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
                                    ) "x"
                                ]
                            , BorealIdent
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
                                ) "+"
                            , BorealNode
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
                                [ BorealAtom
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
                                    ) "1"
                                ]
                            ]
                        ]
                    ]
                ]
            ]
        ]
    ]