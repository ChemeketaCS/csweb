#!/usr/bin/env python3

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

tasks = [
    Task({
        'name': 'files',
        'clean_files': True,
        'sort_files': True,
        'copy_files': ['makefile', 'go.txt'],
    }),
    Task({
        'name': 'make',
        'makefile': 'makefile',
        'make_max_time': 20,
        'make_output_file': '__make_out',
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'exe': 'program.exe',
                'max_time': 1,
                'output_file': '__output',
                'append_output_file': False,
		'input': '3 4',
		'expected_output': 'group size 6\n5 liberties',
            }),
            Run({
                'exe': 'program.exe',
                'max_time': 1,
                'output_file': '__output',
                'append_output_file': True,
		'input': '2 0',
		'expected_output': 'group size 1\n1 liberties',
            }),
            Run({
                'exe': 'program.exe',
                'max_time': 1,
                'output_file': '__output',
                'append_output_file': True,
		'input': '0 4',
		'expected_output': 'no tile at 0 4',
            }),
        ]
    }),
]

pygrader.execute(tasks)
