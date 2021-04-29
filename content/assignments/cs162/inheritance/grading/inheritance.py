#!/usr/bin/env python3

# Allow relative import of pygrader. Not needed if pygrader package is installed on python search path
import os
import sys
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '../../pygrader')))


import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

tasks = [
    Task({
        'name': 'files',
        'clean_files': True,
	    'unzip_files': True,
        'sort_files': True,
        'copy_files': ['makefile'],
    }),
    Task({
        'name': 'copy',
	    'copy_files': ['makefile'],
    }),
    Task({
        'name': 'unzip',
	    'unzip_files': True,
    }),
    Task({
        'name': 'make',
        'makefile': 'makefile',
        'make_max_time': 200,
        'make_output_file': '__make_out',
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'exe': 'item.exe',
                'max_time': 1,
                'output_file': '__item_output',
                'append_output_file': False,
            }),
            Run({
                'exe': 'character.exe',
                'max_time': 1,
                'output_file': '__character_output',
                'append_output_file': False,
            }),
        ]
    }),
]

pygrader.execute(tasks)
