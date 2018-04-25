import React, { Component } from 'react'
import { Form, Field } from 'react-final-form'

class MyForm extends Component {
  render = () => (
    <Form
      onSubmit={console.log}
      render={(props) => (
        <form onSubmit={props.handleSubmit}>
          <h2>Input</h2>
          <Field name="input">
            {({ input, meta }) => (
              <div>
                <input type="text" {...input} placeholder="input" />
                <pre>{JSON.stringify(input, 0, 2)}</pre>
              </div>
            )}
          </Field>
          <hr></hr>
          <h2>Textarea</h2>
          <Field name="textarea">
            {({ input, meta }) => (
              <div>
                <input type="text" {...input} placeholder="textarea" />
                <pre>{JSON.stringify(input, 0, 2)}</pre>
              </div>
            )}
          </Field>
          <hr></hr>
          <h2>Checkbox</h2>
          <Field type="checkbox" name="checkbox">
            {({ input, meta }) => (
              <div>
                <input type="checkbox" {...input} />
                <span>Option 1</span>
                <pre>{JSON.stringify(input, 0, 2)}</pre>
              </div>
            )}
          </Field>
          <hr></hr>
          <h2>Checkboxes</h2>
          {[{ name: 'Option 1', }, { name: 'Option 2' }, { name: 'Option 3', disabled: true }].map((option, key) => (
            <Field type="checkbox" key={key} name={`checkboxes[${key}]`}>
              {({ input, meta }) => (
                <div>
                  <input type="checkbox" {...input} disabled={option.disabled} />
                  <span>{option.name}</span>
                </div>
              )}
            </Field>
          ))}
          <pre>{JSON.stringify({ checkboxes: props.values.checkboxes }, 0, 2)}</pre>
          <hr></hr>
          <h2>Radio</h2>
          <Field value="Option 1" type="radio" name="radio">
            {({ input, meta }) => (
              <div>
                <input type="radio" {...input} />
                <span>Option 1</span>
                <pre>{JSON.stringify(input, 0, 2)}</pre>
              </div>
            )}
          </Field>
          <hr></hr>
          <h2>Radios</h2>
          {[{ name: 'Option 1' }, { name: 'Option 2' }, { name: 'Option 3', disabled: true }].map((option, key) => (
            <Field key={key} value={option.name} type="radio" name="radios">
              {({ input, meta }) => (
                <div>
                  <input type="radio" {...input} disabled={option.disabled} />
                  <span>{option.name}</span>
                </div>
              )}
            </Field>
          ))}
          <pre>{JSON.stringify({ radios: props.values.radios }, 0, 2)}</pre>
          <hr></hr>
          <h2>DatePicker</h2>

          <button type="submit">
            Submit
          </button>
        </form>
      )}
    />
  )
}

export default MyForm